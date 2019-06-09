#include "SettingDlg.h"

extern QString g_IP;

SettingDlg::SettingDlg(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.lineEdit_IP->setText(g_IP);

	connect(ui.btn_set_IP, SIGNAL(clicked()), this, SLOT(btn_setCamIP()));
}

SettingDlg::~SettingDlg()
{
}

void SettingDlg::btn_setCamIP()
{
	g_IP = ui.lineEdit_IP->text();

}