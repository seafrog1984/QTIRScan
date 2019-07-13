#include "SettingDlg.h"
#include <fstream>
#include <iostream> 
#include <QMessageBox>


using namespace std;

extern QString g_camIP;

extern QString g_ip;
extern QString g_port;
extern QString g_uport;

SettingDlg::SettingDlg(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.lineEdit_camIP->setText(g_camIP);
	ui.lineEdit_servIP->setText(g_ip);
	ui.lineEdit_port->setText(g_port);
	ui.lineEdit_uport->setText(g_uport);


	connect(ui.btn_set_Par, SIGNAL(clicked()), this, SLOT(btn_setPar()));
}

SettingDlg::~SettingDlg()
{
}

void SettingDlg::btn_setPar()
{
	g_camIP = ui.lineEdit_camIP->text();
	g_ip = ui.lineEdit_servIP->text();
	g_port = ui.lineEdit_port->text();
	g_uport = ui.lineEdit_uport->text();


	ofstream fout("config.ini");

	fout << g_ip.toStdString() << ' ' << g_port.toStdString() << ' ' << g_uport.toStdString()<<' '<<g_camIP.toStdString();

	fout.close();

	QMessageBox::information(NULL, "Title", QString::fromLocal8Bit("ÐÞ¸Ä³É¹¦"));
		
	
}