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

	void imgScan();//ͼ��ɨ��
	void sysSetting();//ϵͳ����
	void conDataBase();//�������ݿ�
	void updateData();
	void addData(int index,QString cardID,QString scanID,QString RegTime);

private slots:

	void btn_scan_Clicked();//ɨ�躯��
	void btn_focusFar();//Զ��
	void btn_focusNear();//����
	void btn_sysPar();//ϵͳ��������
	void btn_setAuth();//Ȩ������
	void btn_show_func();//��ʾ������

	void btn_clockWise();//ת̨˳ʱ����ת
	void btn_antiClock();//ת̨��ʱ����ת
	void btn_camUp();//�����
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
	void customize();//ϵͳ����-����



public:

	QProgressDialog *progressDialog;

	QString ir_ip;

	SettingDlg *dlg;

	RegDlg *rdlg;

	SetAuthDlg *adlg;

	QString m_msg;

	QLabel *currentTimeLabel;//��ʾϵͳʱ��

//	client_t m_cli;
};
