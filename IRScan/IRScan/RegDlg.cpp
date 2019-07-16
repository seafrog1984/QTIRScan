#include "RegDlg.h"
#include <QCloseEvent>

#pragma execution_character_set("utf-8")

extern QString m_ip;
extern QString m_port;
extern QString g_uport;

extern int g_control_port;
extern int g_card_port;

extern QString m_user;
extern QString m_passwd;

extern int iTestFlag;
extern client_t m_cli;
extern int g_log_flag;

extern QString g_name;
extern QString g_age;
extern QString g_gender;
extern QString g_ID;
extern QString g_scanID;
extern QString g_cardID;

extern int g_reg_flag;


RegDlg::RegDlg(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.btn_reg, SIGNAL(clicked()), this, SLOT(btn_reg()));

	ui.comboBox->addItem(QStringLiteral("��"), 0);
	ui.comboBox->addItem(QStringLiteral("Ů"), 1);

	connect(ui.comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(setGender(int)));

	 ui.lineEdit_ID->setText(g_ID);
	 ui.lineEdit_age->setText(g_age);
	 ui.lineEdit_name->setText(g_name);
	ui.lineEdit_card->setText(g_cardID);
	 ui.lineEdit_5->setText(g_scanID);
}

RegDlg::~RegDlg()
{
}

void RegDlg::btn_reg()
{

	g_ID=ui.lineEdit_ID->text();
	g_age = ui.lineEdit_age->text();
	g_name = ui.lineEdit_name->text();
	g_cardID = ui.lineEdit_card->text();
	g_scanID = ui.lineEdit_5->text();

	g_reg_flag = 1;

	close();
}


void RegDlg::setGender(int )
{
	g_gender = ui.comboBox->currentText();
}

void RegDlg::exec()
{
	// ����Ϊģ̬;
	this->setWindowModality(Qt::ApplicationModal);
	show();
	// ʹ���¼�ѭ��QEventLoop ,����exec()�������������û�ѡ��ȷ������ȡ���󣬹رմ��ڽ����¼�ѭ��������������û�ѡ��Ľ��;
	// ���ݷ��ؽ���õ��û�������ȷ������ȡ������ȡ��Ӧ�Ĳ������Ӷ�ģ���QDialog���exec()����;
	m_eventLoop = new QEventLoop(this);
	m_eventLoop->exec();

}


void RegDlg::closeEvent(QCloseEvent *event)
{
	// �رմ���ʱ�����¼�ѭ������exec()�����з���ѡ����;
	if (m_eventLoop != NULL)
	{
		m_eventLoop->exit();
	}
	event->accept();
}