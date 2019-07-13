#include "SetAuthDlg.h"
#include <QMessageBox>
#include <QStringListModel>
#include <QStandardItemModel>
#include <QModelIndex>


extern QString g_port;
extern QString g_ip;
extern QString g_uport;
extern QString g_user;
extern QString g_passwd;

extern client_t m_cli;
extern int iTestFlag;


SetAuthDlg::SetAuthDlg(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	connect(ui.btn_get_user, SIGNAL(clicked()), this, SLOT(btn_getUser()));

	m_level = 0;
	m_opt_level = 0;

	//if (m_cli.init(g_ip.toStdString(), atoi(g_port.toStdString().c_str())))
	//{
	//	m_msg = QString::fromLocal8Bit("���ӳɹ�");

	//	QMessageBox::information(NULL, "Title", m_msg);
	//}
	//else
	//{
	//	m_msg = QString::fromLocal8Bit("����ʧ��\n��ȷ��IP��˿ں�");
	//	QMessageBox::information(NULL, "Title", m_msg);
	//	return;
	//}
	////2-
	//std::string sPermissions;
	//// ע�⣺ 0��ʾ���Կͻ��ˣ� 1��ʾ��ʽ�ͻ���
	//int iRet = m_cli.login_auth(g_user.toStdString().c_str(), g_passwd.toStdString().c_str(), sPermissions, iTestFlag);
	//if (0 > iRet)
	//{
	//	m_msg = QString::fromLocal8Bit("��ȡ��Ȩ��ʧ��\n");
	//	m_msg.append(m_cli.get_msg().c_str());
	//	m_cli.close();
	//	QMessageBox::information(NULL, "Title", m_msg);
	//}
	//else
	//{
	//	m_msg = QString::fromLocal8Bit("��ȡ��Ȩ��ɹ�\n");
	//	QString sAuth = QString::fromStdString(m_cli.get_auth().c_str());
	//	QString sRep1 = sAuth.mid(8, 16);
	//	QString sRep2('*', sRep1.length());
	//	sAuth.replace(sRep1, sRep2);
	//	if (0 == iRet)
	//	{
	//		m_msg.append(QString::fromLocal8Bit("���Ի���: "));

	//	}
	//	//	m_msg.append(sAuth);

	//	int iPermissions = atoi(sPermissions.c_str());
	//	permissions_t pt;
	//	if (iPermissions & 0x01)
	//	{
	//		pt.p1 = true;
	//	}
	//	if (iPermissions & 0x02)
	//	{
	//		pt.p2 = true;
	//	}
	//	if (iPermissions & 0x04)
	//	{
	//		pt.p3 = true;
	//	}

	//	m_msg.append(QString::fromLocal8Bit("\nȨ��: "));
	//	m_msg.append(QString::fromLocal8Bit("ͼ��ɨ��"));
	//	if (pt.p1)
	//	{
	//		m_msg.append(QString::fromLocal8Bit("(��)"));
	//	}
	//	else
	//	{
	//		m_msg.append(QString::fromLocal8Bit("(��)"));
	//	}
	//	m_msg.append(QString::fromLocal8Bit(",ͼ�����"));
	//	if (pt.p2)
	//	{
	//		m_msg.append(QString::fromLocal8Bit("(��)"));
	//	}
	//	else
	//	{
	//		m_msg.append(QString::fromLocal8Bit("(��)"));
	//	}
	//	m_msg.append(QString::fromLocal8Bit(",ϵͳ����"));
	//	if (pt.p3)
	//	{
	//		m_msg.append(QString::fromLocal8Bit("(��)"));
	//	}
	//	else
	//	{
	//		m_msg.append(QString::fromLocal8Bit("(��)"));
	//	}

	//	if (pt.p1 || pt.p3)
	//	{
	//		QMessageBox::information(NULL, "Title", m_msg);

	//	}
	//	else
	//	{
	//		m_msg.append(QString::fromLocal8Bit("û��Ȩ��"));
	//		QMessageBox::information(NULL, "Title", m_msg);
	//	}

	//}

}

SetAuthDlg::~SetAuthDlg()
{
}


void SetAuthDlg::btn_getUser()
{
	QStandardItemModel *ItemModel = new QStandardItemModel(this);

	QStringList strList;

	if (m_cli.init(g_ip.toStdString(), g_uport.toInt()))
	{
		m_msg = "���ӳɹ�";

	}
	else
	{
		m_msg = "����ʧ��\n��ȷ��IP��˿ں�";
	}

	if (!m_cli.get_users(g_user.toStdString(), g_passwd.toStdString(), m_userinfo, m_level))
	{
		m_msg = QString::fromLocal8Bit("��ȡ�û��б�ʧ��\n");
		m_msg.append(m_cli.get_msg().c_str());
		m_cli.close();

	}
	else
	{
		m_msg = QString::fromLocal8Bit("��ȡ�û��б�ɹ�\n");

		std::map<std::string, std::string>::iterator itor = m_userinfo.begin();
		for (; itor != m_userinfo.end(); ++itor)
		{
			//MessageBox((itor->first+"="+itor->second).c_str());
			strList.append(QString::fromStdString(itor->first.c_str()));
		}
	}

	int nCount = strList.size();
	for (int i = 0; i < nCount; i++)
	{
		QString string = static_cast<QString>(strList.at(i));
		QStandardItem *item = new QStandardItem(string);
		ItemModel->appendRow(item);
	}
	ui.listView->setModel(ItemModel);


	QMessageBox::information(NULL, "Title", m_msg);
}