#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_IRScan.h"

class IRScan : public QMainWindow
{
	Q_OBJECT

public:
	IRScan(QWidget *parent = Q_NULLPTR);

private:
	Ui::IRScanClass ui;

	void imgScan();//ͼ��ɨ��
	void sysSetting();//ϵͳ����


};
