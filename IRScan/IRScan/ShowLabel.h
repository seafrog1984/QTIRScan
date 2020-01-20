#pragma once

#include <QLabel>
#include "IRSDK.h"



class ShowLabel : public QLabel
{
	Q_OBJECT

public:
	ShowLabel(QWidget *parent = 0);
	~ShowLabel();

	QMutex mutex_bmp;
	QImage m_pixImg;

	friend long FrameProc(long hFrame, long lParam);

signals:
	void sigPaint();

public slots:

	int FrameRecv(Frame *pframe);

	void paintEvent(QPaintEvent *event);


};


