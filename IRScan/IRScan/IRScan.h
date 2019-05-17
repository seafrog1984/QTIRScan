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

private:
	Ui::IRScanClass ui;

	void imgScan();//ÕºœÒ…®√Ë
	void sysSetting();//œµÕ≥…Ë÷√

private slots:

	void btn_scan_Clicked();

public:
	QString ir_ip;

};
