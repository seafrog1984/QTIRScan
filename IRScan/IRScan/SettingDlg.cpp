#include "SettingDlg.h"
#include <fstream>
#include <iostream> 
#include <QMessageBox>


using namespace std;

extern int g_cam_type;
extern QString g_camIP;

extern QString g_ip;
extern QString g_port;
extern QString g_uport;
extern QString g_hos_code;
extern QString g_user;
extern QString g_passwd;

extern int g_remember_flag;

int g_code[7] = { 4, 9, 6, 2, 8, 7, 3 };

SettingDlg::SettingDlg(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.lineEdit_camIP->setText(g_camIP);
	ui.lineEdit_servIP->setText(g_ip);
	ui.lineEdit_port->setText(g_port);
	ui.lineEdit_uport->setText(g_uport);
	ui.lineEdit_hosCode->setText(g_hos_code);





	connect(ui.btn_set_Par, SIGNAL(clicked()), this, SLOT(btn_setPar()));
}

SettingDlg::~SettingDlg()
{
}

void SettingDlg::exec()
{
	// ����Ϊģ̬;
	this->setWindowModality(Qt::ApplicationModal);
	show();
	// ʹ���¼�ѭ��QEventLoop ,����exec()�������������û�ѡ��ȷ������ȡ���󣬹رմ��ڽ����¼�ѭ��������������û�ѡ��Ľ��;
	// ���ݷ��ؽ���õ��û�������ȷ������ȡ������ȡ��Ӧ�Ĳ������Ӷ�ģ���QDialog���exec()����;
	m_eventLoop = new QEventLoop(this);
	m_eventLoop->exec();

}

void encryption(string& c, int a[]){

	for (int i = 0, j = 0; c[j]; j++, i = (i + 1) % 7){

		c[j] += a[i];

		if (c[j] > 122) c[j] -= 90;
	}
}


void SettingDlg::btn_setPar()
{
	g_camIP = ui.lineEdit_camIP->text();
	g_ip = ui.lineEdit_servIP->text();
	g_port = ui.lineEdit_port->text();
	g_uport = ui.lineEdit_uport->text();
	g_hos_code = ui.lineEdit_hosCode->text();

	string s = g_passwd.toStdString();
	encryption(s, g_code);

	ofstream fout("config.ini");

	fout << g_ip.toStdString() << ' ' << g_port.toStdString() << ' ' << g_uport.toStdString() << ' ' << g_camIP.toStdString() <<' '<< g_user.toStdString() << ' ' << s << ' ' << QString::number(g_remember_flag).toStdString() << ' ' << g_hos_code.toStdString();

	fout.close();

	QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("�޸ĳɹ�"));
		
	
}