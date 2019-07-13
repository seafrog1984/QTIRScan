#pragma once

#include <QWidget>
#include "ui_SetAuthDlg.h"
#include "./incl/client.h"


class SetAuthDlg : public QWidget
{
	Q_OBJECT

public:
	SetAuthDlg(QWidget *parent = Q_NULLPTR);
	~SetAuthDlg();

	std::map<std::string, std::string> m_userinfo;
	int m_level;
	int m_opt_level;
	QString m_msg;

private:
	Ui::SetAuthDlg ui;

public slots:
	void btn_getUser();

};
