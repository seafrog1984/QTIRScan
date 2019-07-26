#include "SettingDlg.h"
#include <fstream>
#include <iostream> 
#include <QMessageBox>


using namespace std;

extern QString g_camIP;

extern QString g_ip;
extern QString g_port;
extern QString g_uport;
extern QString g_hos_code;
extern QString g_user;
extern QString g_passwd;

extern int g_remember_flag;

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

void SettingDlg::btn_setPar()
{
	g_camIP = ui.lineEdit_camIP->text();
	g_ip = ui.lineEdit_servIP->text();
	g_port = ui.lineEdit_port->text();
	g_uport = ui.lineEdit_uport->text();


	ofstream fout("config.ini");

	fout << g_ip.toStdString() << ' ' << g_port.toStdString() << ' ' << g_uport.toStdString() << ' ' << g_camIP.toStdString() <<' '<< g_user.toStdString() << ' ' << g_passwd.toStdString() << ' ' << QString::number(g_remember_flag).toStdString() << ' ' << g_hos_code.toStdString();

	fout.close();

	QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("�޸ĳɹ�"));
		
	
}