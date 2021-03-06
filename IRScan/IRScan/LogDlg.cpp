#include "LogDlg.h"
#include "IRScan.h"
#include <fstream>
#include <iostream> 
#include "./incl/client.h"
#include <QMessageBox>


extern int g_cam_type;

extern short int IMAGE_WIDTH;
extern short int IMAGE_HEIGHT;

QString g_ip;
QString g_port;
QString g_uport;

extern QString g_camIP;
extern QString g_hos_code;
QString g_user = "test";
QString g_passwd = "test@1234";

int iTestFlag = 0;
client_t m_cli;
int g_log_flag = 0;
QString m_msg;

using namespace std;
extern int g_remember_flag;
extern int g_code[7];


extern void encryption(string& c, int a[]);

void decode(string& c, int a[]){

	for (int i = 0, j = 0; c[j]; j++, i = (i + 1) % 7){

		c[j] -= a[i];

		if (c[j] < 32) c[j] += 90;
	}
}


LogDlg::LogDlg(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.btn_log, SIGNAL(clicked()), this, SLOT(log()));

	ifstream fin("config.ini");

	if (fin.fail())
	{
		QMessageBox::information(NULL, "Title", "No file!");
		exit(-1);
	}

	string str1, str2, str3,str4,str5,str6,str7,str8;
	int remember_flag;

	fin >> g_cam_type>>str1 >> str2 >> str3 >> str4 >> str5 >> str6 >> g_remember_flag>>str8;

	if (g_cam_type == 0)
	{
		IMAGE_WIDTH = 384;
		IMAGE_HEIGHT = 288;
	}
	else if (g_cam_type == 1)
	{
		IMAGE_WIDTH = 640;
		IMAGE_HEIGHT = 480;
	}


	g_ip = QString::fromStdString(str1);
	g_port = QString::fromStdString(str2);
	g_uport = QString::fromStdString(str3);
	g_camIP = QString::fromStdString(str4);
//	g_remember_flag = atoi(str7.c_str());
	g_hos_code = QString::fromStdString(str8);

	decode(str6, g_code);

	if (g_remember_flag)
	{
		g_user = QString::fromStdString(str5);
		g_passwd = QString::fromStdString(str6);
	}
	else
	{
		g_user = "";
		g_passwd = "";
	}

	fin.close();

	// TODO:  在此添加额外的初始化

	//m_ip = "10.70.77.81";
	//m_ip="192.168.31.157";

	//g_user = "admin";
	//g_passwd = "test@1234";

	ui.lineEdit_user->setText(g_user);
	ui.lineEdit_pw->setText(g_passwd);
	ui.lineEdit_pw->setEchoMode(QLineEdit::Password);

	iTestFlag = 1;
	

}

LogDlg::~LogDlg()
{
}


void LogDlg::log()
{

	g_user = ui.lineEdit_user->text();
	g_passwd = ui.lineEdit_pw->text();

	if (m_cli.init(g_ip.toStdString(), atoi(g_port.toStdString().c_str())))
	{
		m_msg = QString::fromLocal8Bit("连接成功");

	//	QMessageBox::information(NULL, "Title", m_msg);
	}
	else
	{
		m_msg = QString::fromLocal8Bit("连接失败\n请确认IP或端口号");
		QMessageBox::information(NULL, "Title", m_msg);
		return;
	}
	//2-
	std::string sPermissions;
	// 注意： 0表示测试客户端， 1表示正式客户端
	int iRet = m_cli.login_auth(g_user.toStdString().c_str(), g_passwd.toStdString().c_str(), sPermissions, iTestFlag);
	if (0 > iRet)
	{
		m_msg = QString::fromLocal8Bit("获取授权码失败\n");
		m_msg.append(m_cli.get_msg().c_str());
		m_cli.close();
		QMessageBox::information(NULL, "Title", m_msg);
		return;
	}
	else
	{
		m_msg = QString::fromLocal8Bit("获取授权码成功\n");
		QString sAuth = QString::fromStdString(m_cli.get_auth().c_str());
		QString sRep1 = sAuth.mid(8, 16);
		QString sRep2('*', sRep1.length());
		sAuth.replace(sRep1, sRep2);
		if (0 == iRet)
		{
			m_msg.append(QString::fromLocal8Bit("测试环境: "));

		}
	//	m_msg.append(sAuth);

		int iPermissions = atoi(sPermissions.c_str());
		permissions_t pt;
		if (iPermissions & 0x01)
		{
			pt.p1 = true;
		}
		if (iPermissions & 0x02)
		{
			pt.p2 = true;
		}
		if (iPermissions & 0x04)
		{
			pt.p3 = true;
		}

		m_msg.append(QString::fromLocal8Bit("\n权限: "));
		m_msg.append(QString::fromLocal8Bit("图像扫描"));
		if (pt.p1)
		{
			m_msg.append(QString::fromLocal8Bit("(√)"));
		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("(×)"));
		}
		m_msg.append(QString::fromLocal8Bit(",图像分析"));
		if (pt.p2)
		{
			m_msg.append(QString::fromLocal8Bit("(√)"));
		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("(×)"));
		}
		m_msg.append(QString::fromLocal8Bit(",系统设置"));
		if (pt.p3)
		{
			m_msg.append(QString::fromLocal8Bit("(√)"));
		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("(×)"));
		}

		if (pt.p1 || pt.p3)
		{
			g_log_flag = 1;
			//QMessageBox::information(NULL, "Title", m_msg);

		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("没有权限"));
			QMessageBox::information(NULL, "Title", m_msg);
			return;
		}

	}

	if (g_remember_flag)
	{
		string s = g_passwd.toStdString();
		encryption(s, g_code);

		ofstream fout("config.ini");

		fout << g_cam_type << ' ' << g_ip.toStdString() << ' ' << g_port.toStdString() << ' ' << g_uport.toStdString() << ' ' << g_camIP.toStdString() << ' ' << g_user.toStdString() << ' ' << s << ' ' << g_remember_flag << ' ' << g_hos_code.toStdString();

		fout.close();

	}

	IRScan *w = new IRScan;
	w->show();

	this->setHidden(true);
}