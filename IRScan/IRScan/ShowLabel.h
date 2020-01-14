#pragma once

#include <QLabel>
#include "IRSDK.h"



class ShowLabel : public QLabel
{
	Q_OBJECT

public:
	ShowLabel(QWidget *parent = 0);
	~ShowLabel();

	friend long FrameProc(long hFrame, long lParam);

signals:
	void sigPaint();

public slots:

	int FrameRecv(Frame *pframe);

	void paintEvent(QPaintEvent *event);


};


