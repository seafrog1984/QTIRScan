#include "ShowLabel.h"
#include <opencv2\opencv.hpp>
#include <imgProcDll.h>
#include <QElapsedTimer>
#include <QCoreApplication>
#include <QTime>
#include <QFile>
#include <QTextStream>

extern Frame g_frame;
extern short int IMAGE_WIDTH ;
extern short int IMAGE_HEIGHT ;

using namespace cv;

ShowLabel::ShowLabel(QWidget *parent)
	: QLabel(parent)
{
	connect(this, SIGNAL(sigPaint()), this, SLOT(update()));
	setUpdatesEnabled(true);
}

ShowLabel::~ShowLabel()
{
}



int ShowLabel::FrameRecv(Frame *pFrame)
{
	//QTime qTime;

	//qTime.start();

	if (pFrame == NULL)
	{
		return -1;
	}
	else
	{
		//	STAT_TEMPER sFull_Temp;

		memcpy(&g_frame, pFrame, sizeof(Frame));

		Mat img;
		img.create(IMAGE_HEIGHT, IMAGE_WIDTH, CV_8UC1);

		data2Img(g_frame.buffer, img, IMAGE_HEIGHT, IMAGE_WIDTH, 16, 2, 2, 21.5);
		cv::resize(img, img, cv::Size(480, 640));

		Mat g_dstImage3;
		img.copyTo(g_dstImage3);

		int thickness = 2;
		int lineType = 8;
		/*cv::line(g_dstImage3, Point(g_dstImage3.cols / 2, 0),
		Point(g_dstImage3.cols / 2, g_dstImage3.rows - 1),
		Scalar(255, 255, 255),
		thickness,
		lineType);
		int step = g_dstImage3.rows / 4;

		for (int i = 0; i<4; i++)
		{
		cv::line(g_dstImage3,
		Point(g_dstImage3.cols / 2, 0 + i*step),
		Point(0, g_dstImage3.cols / 2 * 1.73 + i*step),
		Scalar(255, 255, 255),
		thickness,
		lineType);

		cv::line(g_dstImage3,
		Point(g_dstImage3.cols / 2, 0 + i*step),
		Point(g_dstImage3.cols - 1, g_dstImage3.cols / 2 * 1.73 + i*step),
		Scalar(255, 255, 255),
		thickness,
		lineType);
		}*/

		cv::line(g_dstImage3, Point(240, 0), Point(240, 639), Scalar(255, 255, 255), thickness, lineType);
		cv::line(g_dstImage3, Point(240, 0), Point(0, 415), Scalar(255, 255, 255), thickness, lineType);
		cv::line(g_dstImage3, Point(240, 0), Point(479, 415), Scalar(255, 255, 255), thickness, lineType);
		cv::line(g_dstImage3, Point(240, 160), Point(0, 575), Scalar(255, 255, 255), thickness, lineType);
		cv::line(g_dstImage3, Point(240, 160), Point(479, 575), Scalar(255, 255, 255), thickness, lineType);
		cv::line(g_dstImage3, Point(240, 320), Point(56, 639), Scalar(255, 255, 255), thickness, lineType);
		cv::line(g_dstImage3, Point(240, 320), Point(424, 639), Scalar(255, 255, 255), thickness, lineType);
		cv::line(g_dstImage3, Point(240, 480), Point(148, 639), Scalar(255, 255, 255), thickness, lineType);
		cv::line(g_dstImage3, Point(240, 480), Point(332, 639), Scalar(255, 255, 255), thickness, lineType);


		QImage image = QImage((const unsigned char*)(g_dstImage3.data), img.cols, img.rows, QImage::Format_RGB888);

		//this->setMinimumHeight(641);
		//this->setMinimumHeight(640);

		//QLabel *pui = ((Ui::IRScanClass*)lParam)->scanPicShow;

		if (image.isNull())
		{
			return -1;
		}
		else
		{
			this->setPixmap(QPixmap::fromImage(image));
			this->adjustSize();

			emit sigPaint();
		}

		qApp->processEvents(QEventLoop::ExcludeUserInputEvents);

		//QElapsedTimer et;
		//et.start();
		//while (et.elapsed() < 25)
		//{
		//	QCoreApplication::processEvents();
		//}

		/*	QDateTime time = QDateTime::currentDateTime();
		QString strTime = time.toString("MM-dd hh:mm:ss");
		QString strMessage = QString("%1 : Function:%2  \r\n").arg(strTime).arg("FrameProc");
		QFile outFile("scan.log");
		outFile.open(QIODevice::WriteOnly | QIODevice::Append);
		QTextStream ts(&outFile);
		ts << strMessage << endl;
		outFile.close();*/
		img.release();
		g_dstImage3.release();

	}

	//QDateTime time = QDateTime::currentDateTime();
	//QString strTime = time.toString("MM-dd hh:mm:ss");
	//QString strMessage = QString("%1 : Function:%2 time-%3  \r\n").arg(strTime).arg("FrameRecv").arg(qTime.elapsed());
	//QFile outFile("scan.log");
	//outFile.open(QIODevice::WriteOnly | QIODevice::Append);
	//QTextStream ts(&outFile);
	//ts << strMessage << endl;
	//outFile.close();

	return 1;
}

void ShowLabel::paintEvent(QPaintEvent *event)
{
	//QTime qTime;
	//qTime.start();

	QLabel::paintEvent(event);

	//QDateTime time = QDateTime::currentDateTime();
	//QString strTime = time.toString("MM-dd hh:mm:ss");
	//QString strMessage = QString("%1 : Function:%2 time-%3  \r\n").arg(strTime).arg("Paint").arg(qTime.elapsed());
	//QFile outFile("scan.log");
	//outFile.open(QIODevice::WriteOnly | QIODevice::Append);
	//QTextStream ts(&outFile);
	//ts << strMessage << endl;
	//outFile.close();

}