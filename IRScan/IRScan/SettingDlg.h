#pragma once

#include <QWidget>
#include "ui_SettingDlg.h"
#include <QEventLoop>

class SettingDlg : public QWidget
{
	Q_OBJECT

public:
	SettingDlg(QWidget *parent = Q_NULLPTR);
	~SettingDlg();

	void exec();
	QEventLoop *m_eventLoop;

private:
	Ui::SettingDlg ui;

public slots:
	void btn_setPar();

};
