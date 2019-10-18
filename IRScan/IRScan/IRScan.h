#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_IRScan.h"

#include "IRSDK.h"
#include "SettingDlg.h"
#include "RegDlg.h"
#include "SetAuthDlg.h"
#include "./incl/client.h"
#include <opencv2\opencv.hpp>
#include <QTimer>
#include <QProgressDialog>

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
	void conDataBase();//连接数据库
	void updateData();
	void addData(int index,QString cardID,QString scanID,QString RegTime);

private slots:

	void btn_scan_Clicked();//扫描函数
	void btn_focusFar();//远焦
	void btn_focusNear();//近焦
	void btn_sysPar();//系统参数设置
	void btn_setAuth();//权限设置
	void btn_show_func();//显示功能区

	void btn_clockWise();//转台顺时针旋转
	void btn_antiClock();//转台逆时针旋转
	void btn_camUp();//相机上
	void btn_camDown();
	void btn_camLeft();
	void btn_camRight();
	void btn_reg();
	void btn_del();
	void btn_change();
	void btn_pre();
	void btn_next();
	void btn_start();
	void btn_end();
	void btn_dateSel();
	void btn_nameSel();
	void btn_showAll();
	void btn_sendData();

	void time_update();
	void customize();//系统设置-定制



public:

	QProgressDialog *progressDialog;

	QString ir_ip;

	SettingDlg *dlg;

	RegDlg *rdlg;

	SetAuthDlg *adlg;

	QString m_msg;

	QLabel *currentTimeLabel;//显示系统时间

//	client_t m_cli;
};
