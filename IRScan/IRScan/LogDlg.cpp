#include "LogDlg.h"
#include "IRScan.h"
#include <fstream>
#include <iostream> 
#include "./incl/client.h"
#include <QMessageBox>

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

	fin >> str1 >> str2 >> str3 >> str4 >> str5 >> str6 >> g_remember_flag>>str8;
	g_ip = QString::fromStdString(str1);
	g_port = QString::fromStdString(str2);
	g_uport = QString::fromStdString(str3);
	g_camIP = QString::fromStdString(str4);
//	g_remember_flag = atoi(str7.c_str());
	g_hos_code = QString::fromStdString(str8);

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

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

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
		m_msg = QString::fromLocal8Bit("���ӳɹ�");

		QMessageBox::information(NULL, "Title", m_msg);
	}
	else
	{
		m_msg = QString::fromLocal8Bit("����ʧ��\n��ȷ��IP��˿ں�");
		QMessageBox::information(NULL, "Title", m_msg);
		return;
	}
	//2-
	std::string sPermissions;
	// ע�⣺ 0��ʾ���Կͻ��ˣ� 1��ʾ��ʽ�ͻ���
	int iRet = m_cli.login_auth(g_user.toStdString().c_str(), g_passwd.toStdString().c_str(), sPermissions, iTestFlag);
	if (0 > iRet)
	{
		m_msg = QString::fromLocal8Bit("��ȡ��Ȩ��ʧ��\n");
		m_msg.append(m_cli.get_msg().c_str());
		m_cli.close();
		QMessageBox::information(NULL, "Title", m_msg);
	}
	else
	{
		m_msg = QString::fromLocal8Bit("��ȡ��Ȩ��ɹ�\n");
		QString sAuth = QString::fromStdString(m_cli.get_auth().c_str());
		QString sRep1 = sAuth.mid(8, 16);
		QString sRep2('*', sRep1.length());
		sAuth.replace(sRep1, sRep2);
		if (0 == iRet)
		{
			m_msg.append(QString::fromLocal8Bit("���Ի���: "));

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

		m_msg.append(QString::fromLocal8Bit("\nȨ��: "));
		m_msg.append(QString::fromLocal8Bit("ͼ��ɨ��"));
		if (pt.p1)
		{
			m_msg.append(QString::fromLocal8Bit("(��)"));
		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("(��)"));
		}
		m_msg.append(QString::fromLocal8Bit(",ͼ�����"));
		if (pt.p2)
		{
			m_msg.append(QString::fromLocal8Bit("(��)"));
		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("(��)"));
		}
		m_msg.append(QString::fromLocal8Bit(",ϵͳ����"));
		if (pt.p3)
		{
			m_msg.append(QString::fromLocal8Bit("(��)"));
		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("(��)"));
		}

		if (pt.p1 || pt.p3)
		{
			g_log_flag = 1;
			QMessageBox::information(NULL, "Title", m_msg);

		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("û��Ȩ��"));
			QMessageBox::information(NULL, "Title", m_msg);
		}

	}

	if (g_remember_flag)
	{
		ofstream fout("config.ini");

		fout << g_ip.toStdString() << ' ' << g_port.toStdString() << ' ' << g_uport.toStdString() << ' ' << g_camIP.toStdString()<<' '<<g_user.toStdString()<<' '<<g_passwd.toStdString()<<' '<<g_remember_flag<<' '<<g_hos_code.toStdString();

		fout.close();

	}

	IRScan *w = new IRScan;
	w->show();

	this->setHidden(true);
}