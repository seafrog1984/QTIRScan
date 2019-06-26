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

	void imgScan();//图像扫描
	void sysSetting();//系统设置


private slots:

	void btn_scan_Clicked();//扫描函数
	void btn_focusFar();//远焦
	void btn_focusNear();//近焦
	void btn_sysPar();//系统参数设置
	void btn_clockWise();//转台顺时针旋转
	void btn_antiClock();//转台逆时针旋转
	void btn_camUp();//相机上
	void btn_camDown();
	void btn_camLeft();
	void btn_camRight();

public:
	QString ir_ip;

	SettingDlg *dlg;

};
