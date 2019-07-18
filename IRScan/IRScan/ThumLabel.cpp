#include "ThumLabel.h"

#include<QMouseEvent>
#include <QKeyEvent>

#define IMAGE_MAX_NUM 15

extern int g_currentPic; //当前图像下标
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

	// 如果是鼠标右键按下
	if (ev->button() == Qt::RightButton)
	{
	
		int nRet = QMessageBox::question(NULL, QString::fromLocal8Bit("删除图像"), QString::fromLocal8Bit("是否删除图像？"), QMessageBox::Yes, QMessageBox::No);
		// 选择是
		if (QMessageBox::Yes == nRet)
		{
			g_currentPic = objectName().toInt();
			g_recap_flag = 1;
			clear();
		}

		// 选择否
		//if (QMessageBox::No == nRet)
		//{
		//	QMessageBox::information(NULL, "Title", "No");
		//}
	}


}