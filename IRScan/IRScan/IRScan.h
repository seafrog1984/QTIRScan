#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_IRScan.h"

#include "IRSDK.h"
#include "SettingDlg.h"

#include <opencv2\opencv.hpp>

class IRScan : public QMainWindow
{
	Q_OBJECT

public:
	IRScan(QWidget *parent = Q_NULLPTR);
	void closeEvent(QCloseEvent* event);

protected:
	bool eventFilter(QObject *obj, QEvent *event);

private:
	Ui::IRScanClass ui;

	void imgScan();//ͼ��ɨ��
	void sysSetting();//ϵͳ����


private slots:

	void btn_scan_Clicked();//ɨ�躯��
	void btn_focusFar();//Զ��
	void btn_focusNear();//����
	void btn_sysPar();//ϵͳ��������

public:
	QString ir_ip;

	SettingDlg *dlg;

};
