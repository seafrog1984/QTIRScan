#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_IRScan.h"

#include "IRSDK.h"

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

	void btn_scan_Clicked();
	void btn_focusFar();
	void btn_focusNear();

public:
	QString ir_ip;

};
