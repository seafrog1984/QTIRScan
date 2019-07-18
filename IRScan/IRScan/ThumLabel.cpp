#include "ThumLabel.h"

#include<QMouseEvent>
#include <QKeyEvent>

#define IMAGE_MAX_NUM 15

extern int g_currentPic; //��ǰͼ���±�
extern int g_recap_flag;


ThumLabel::ThumLabel(QWidget* parent)
:QLabel(parent)
{
}

ThumLabel::~ThumLabel()
{
}


void ThumLabel::mousePressEvent(QMouseEvent *ev)
{
	//emit pressed(ev);
	//update();
	//p1 = ev->pos();

	for (int i = 0; i < IMAGE_MAX_NUM; i++)
		{
			QLabel *p = parent()->findChild<QLabel*>(QString::number(i));
			p->setStyleSheet("border-width: 2px;border-style: solid;border-color: rgb(255, 255, 255);");
		}
	setStyleSheet("border-width: 2px;border-style: solid;border-color: rgb(255, 0, 0);");

	// ���������Ҽ�����
	if (ev->button() == Qt::RightButton)
	{
	
		int nRet = QMessageBox::question(NULL, QString::fromLocal8Bit("ɾ��ͼ��"), QString::fromLocal8Bit("�Ƿ�ɾ��ͼ��"), QMessageBox::Yes, QMessageBox::No);
		// ѡ����
		if (QMessageBox::Yes == nRet)
		{
			g_currentPic = objectName().toInt();
			g_recap_flag = 1;
			clear();
		}

		// ѡ���
		//if (QMessageBox::No == nRet)
		//{
		//	QMessageBox::information(NULL, "Title", "No");
		//}
	}


}