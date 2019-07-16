#ifndef ThumLabel_H
#define ThumLabel_H
#include<QLabel>
#include<QString>
#include<QWidget>
#include<QMainWindow>
#include<QLine>
#include"QMessageBox"

#include <QLabel>

class ThumLabel : public QLabel
{
	Q_OBJECT

public:
	ThumLabel(QWidget *parent = 0);
	~ThumLabel();

	void mousePressEvent(QMouseEvent *ev);    //°´ÏÂ

};
#endif // MYLABEL_H