#include "IRScan.h"

#include<QMessageBox>
#include <QList>
#include <qfiledialog.h>   

#include <imgProcDll.h>


#define IMAGE_WIDTH  384
#define IMAGE_HEIGHT 288
#define IMAGE_MAX_NUM 15

Frame g_frame;

int g_picTotalNum = 0;//缩略图窗口数量
int g_flag_play = 1;//视频暂停，播放标志位

int g_picNum = 0;//总的图像数
int g_currentPic = 0; //当前图像下标

unsigned short *g_pData[15];
QImage g_qImgShow[15];
QString g_tempFolder;//图像保存目录
QString g_sysPath;//配置文件路径

QString g_IP = "192.168.1.60";

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

std::vector<std::string> vecPngIDReq;
std::vector<std::string> vecPngIDResp;

QString g_name="王五";
QString g_age="20";
QString g_gender="男";
QString g_ID="id003";
QString g_scanID="SCAN0016";
QString g_cardID="CARD100000000003";


long FrameProc(long hFrame, long lParam)
{

	Frame* pFrame = (Frame*)hFrame;

	STAT_TEMPER sFull_Temp;

	memcpy(&g_frame, pFrame, sizeof(Frame));

	Mat img;
	img.create(IMAGE_HEIGHT, IMAGE_WIDTH, CV_8UC1);

	data2Img(g_frame.buffer, img, IMAGE_HEIGHT, IMAGE_WIDTH, 16, 2, 2,21.5);
	cv::resize(img, img, cv::Size(480, 640));

	Mat g_dstImage3;
	img.copyTo(g_dstImage3);

	int thickness = 2;
	int lineType = 8;
	cv::line(g_dstImage3, Point(g_dstImage3.cols / 2, 0),
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
	}
	

	QImage image = QImage((const unsigned char*)(g_dstImage3.data), img.cols, img.rows, QImage::Format_RGB888);

	Ui::IRScanClass *pui = (Ui::IRScanClass*)lParam;

	pui->scanPicShow->setPixmap(QPixmap::fromImage(image));

	img.release();
	return 1;
}

IRScan::IRScan(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	ui.tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section{background:rgb(21,85,141);color:rgb(255,255,255);}"); //设置表头背景色
	ui.tableWidget->horizontalHeader()->setSectionsClickable(false);
	//ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	ui.tableWidget->horizontalHeader()->setVisible(true);
	ui.tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);//设置单击选择一行
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);	//设置每行内容不可编辑
	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);	//设置只能选择一行，不能选择多行


	connect(ui.imgScanAct, &QAction::triggered, this, &IRScan::imgScan);
	connect(ui.imgSysAct, &QAction::triggered, this, &IRScan::sysSetting);

	connect(ui.btn_scan, SIGNAL(clicked()), this, SLOT(btn_scan_Clicked()));
	connect(ui.btn_focus_far, SIGNAL(clicked()), this, SLOT(btn_focusFar()));
	connect(ui.btn_focus_near, SIGNAL(clicked()), this, SLOT(btn_focuNear()));
	connect(ui.btn_sys_par, SIGNAL(clicked()), this, SLOT(btn_sysPar()));

	connect(ui.btn_clock, SIGNAL(clicked()), this, SLOT(btn_clockWise()));
	connect(ui.btn_anticlock, SIGNAL(clicked()), this, SLOT(btn_antiClock()));
	connect(ui.btn_cam_up, SIGNAL(clicked()), this, SLOT(btn_camUp()));
	connect(ui.btn_cam_ups, SIGNAL(clicked()), this, SLOT(btn_camUp()));
	connect(ui.btn_cam_down, SIGNAL(clicked()), this, SLOT(btn_camDown()));
	connect(ui.btn_cam_downs, SIGNAL(clicked()), this, SLOT(btn_camDown()));
	connect(ui.btn_cam_left, SIGNAL(clicked()), this, SLOT(btn_camLeft()));
	connect(ui.btn_cam_right, SIGNAL(clicked()), this, SLOT(btn_camRight()));
	
	connect(ui.btn_reg, SIGNAL(clicked()), this, SLOT(btn_reg()));
	connect(ui.btn_del, SIGNAL(clicked()), this, SLOT(btn_del()));
	connect(ui.btn_change, SIGNAL(clicked()), this, SLOT(btn_change()));


	int g_picTotalNum = IMAGE_MAX_NUM;
	int count = 0;
	for (int x = 0; x < (g_picTotalNum - 1) / 3 + 1; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			QLabel *lb = new QLabel;
			lb->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
			//lb->setFixedSize(240, 320);
			lb->setText(QString::number(x * 3 + y + 1));
			lb->setObjectName(QString::number(x * 3 + y));
			lb->setFrameShape(QFrame::Box);
			ui.gridLayout_2->addWidget(lb, x, y);
			lb->setStyleSheet(QLatin1String("backgroud-color:rgb(255,255,255)"));
			lb->setAlignment(Qt::AlignCenter);
			count++;
			if (count >= g_picTotalNum) break;
		}
		if (count >= g_picTotalNum) break;
	}

	ui.toolBar->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
		"background-color: rgb(19, 35, 67);"));

	ui.scanPicShow->installEventFilter(this);

	std::string scanID = "test20190521";
	QDir dir;
	g_tempFolder = dir.currentPath() + "//Temp//" + QString::fromStdString(scanID);
	g_sysPath = dir.currentPath() + "//config.ini";

	// 检查目录是否存在，若不存在则新建

	if (!dir.exists(g_tempFolder))
	{
		bool res = dir.mkpath(g_tempFolder);
		//		qDebug() << "新建目录是否成功" << res;
	}

	updateData();

}

void IRScan::btn_change()
{
	int row = ui.tableWidget->currentIndex().row();

	g_cardID = ui.tableWidget->item(row, 1)->text();
	g_scanID = ui.tableWidget->item(row, 2)->text();
	g_age = ui.tableWidget->item(row, 6)->text();
	g_name = ui.tableWidget->item(row, 3)->text();
	g_gender = ui.tableWidget->item(row, 4)->text();

	rdlg = new RegDlg;

	rdlg->setWindowTitle(QString::fromLocal8Bit("修改"));
	rdlg->setWindowModality(Qt::ApplicationModal);
	rdlg->ui.lineEdit_card->setDisabled(false);
	rdlg->ui.lineEdit_5->setDisabled(false);
	rdlg->ui.btn_reg->setText(QString::fromLocal8Bit("修改"));
	rdlg->exec();


	//	conDataBase();

	std::map<std::string, std::string> mapCardInfo;


	if ("" != g_ID)
	{
		mapCardInfo["identity"] = g_ID.toStdString();
	}
	if ("" != g_name)
	{
		QByteArray cdata = g_name.toLocal8Bit();
		mapCardInfo["name"] = string(cdata);
	}
	if ("" != g_gender)
	{
		QByteArray cdata = g_gender.toLocal8Bit();
		mapCardInfo["sex"] = string(cdata);
	}
	if ("" != g_age)
	{
		mapCardInfo["age"] = g_age.toStdString();
	}
	if ("" != g_cardID)
	{
		mapCardInfo["card_id"] = g_cardID.toStdString();
	}


	QString m_msg = QString::fromLocal8Bit("卡号: ");
	m_msg.append(g_cardID);
	QMessageBox::information(NULL, "Title", m_msg);

	int iRet = m_cli.set_cardid(mapCardInfo, m_user.toStdString());
	if (0 < iRet)
	{
		m_msg = QString::fromLocal8Bit("注册卡信息成功\nID:");
		m_msg.append(g_cardID);

	}
	else
	{
		m_msg = QString::fromLocal8Bit("注册卡信息失败\n");
		m_msg.append(m_cli.get_msg().c_str());
		m_cli.close();

	}
	QMessageBox::information(NULL, "Title", m_msg);


	std::map<std::string, std::string> mapUserInfo;
	mapUserInfo["scan_id"] = g_scanID.toStdString();
	//mapUserInfo["card_id"] = sCardID;
	mapUserInfo["pic"] = vec_join(vecPngIDReq, ',');
	mapUserInfo["user"] = m_user.toStdString();

	if (!m_cli.send_info(mapUserInfo))
	{
		m_msg = QString::fromLocal8Bit("发送用户信息失败\n");
		m_msg.append(m_cli.get_msg().c_str());
		m_cli.close();

	}
	else
	{
		m_msg = QString::fromLocal8Bit("发送用户信息成功");
	}

	QMessageBox::information(NULL, "Title", m_msg);

	updateData();



}

void IRScan::btn_del()
{
	int row = ui.tableWidget->currentIndex().row();

	g_scanID = ui.tableWidget->item(row, 2)->text();



	QString m_msg;
	int iRet = m_cli.del_scanid(g_scanID.toStdString());
	if (0 < iRet)
	{
		m_msg = QString::fromLocal8Bit("删除扫描ID成功\nID:");
		m_msg.append(g_scanID);
	}
	else
	{
		m_msg = QString::fromLocal8Bit( "删除扫描ID失败\n");
		m_msg.append(m_cli.get_msg().c_str());
		m_cli.close();

	}
	QMessageBox::information(NULL, "Title", m_msg);

	ui.tableWidget->setRowCount(0);
	updateData();
}



void IRScan::updateData()
{

	std::map <std::string, std::string> mapParams;
	mapParams["data_type"] = "4";
	mapParams["page_size"] = "20";
	mapParams["page_num"] = "1";
	//mapParams["name"] = "张三";
	//mapParams["cardid"] = "CARD100000000001";
	//mapParams["scanid"] = "SCAN001";
	//mapParams["begin"] = "2018-12-01 00:00:00";
	//mapParams["end"] = "2019-12-01 00:00:00";
	std::string sParams = map_join(mapParams, '&', '=');

	std::string sData;
	QString m_msg;
	int iRet = m_cli.get_listdata(sParams, sData);
	if (0 < iRet)
	{
		//m_msg = "结果:\n";
		m_msg.append(QString::fromLocal8Bit(sData.c_str()));
		//QMessageBox::information(NULL, "Title", m_msg);
		QList<QString> lst;
		lst = m_msg.split(';');

		lst[0] = lst[0].section('=', -1, -1);
		ui.tableWidget->setRowCount(lst.size() + 1);
		for (int i = 0; i != lst.size(); ++i)
		{
			//		QMessageBox::information(NULL, "Title", lst[i].section(',',1,1));

			addData(i, lst[i].section(',', 0, 0), lst[i].section(',', 1, 1), lst[i].section(',', -1, -1));
		}

	}
	else
	{
		m_msg = QString::fromLocal8Bit("失败\n");
		m_msg.append(QString::fromLocal8Bit(m_cli.get_msg().c_str()));
		QMessageBox::information(NULL, "Title", m_msg);
		m_cli.close();

	}
}


void IRScan::btn_reg()
{
	rdlg = new RegDlg;

	rdlg->setWindowModality(Qt::ApplicationModal);
	rdlg->exec();

//	conDataBase();

		std::map<std::string, std::string> mapCardInfo;


		if ("" != g_ID)
		{
			mapCardInfo["identity"] = g_ID.toStdString();
		}
		if ("" != g_name)
		{
			QByteArray cdata = g_name.toLocal8Bit();
			mapCardInfo["name"] = string(cdata);
		}
		if ("" != g_gender)
		{
			QByteArray cdata = g_gender.toLocal8Bit();
			mapCardInfo["sex"] = string(cdata);
		}
		if ("" != g_age)
		{
			mapCardInfo["age"] = g_age.toStdString();
		}
		if ("" != g_cardID)
		{
			mapCardInfo["card_id"] = g_cardID.toStdString();
		}


		QString m_msg = QString::fromLocal8Bit("卡号: ");
		m_msg.append(g_cardID);
		QMessageBox::information(NULL, "Title", m_msg);

		int iRet = m_cli.set_cardid(mapCardInfo, m_user.toStdString());
		if (0 < iRet)
		{
			m_msg = QString::fromLocal8Bit("注册卡信息成功\nID:");
			m_msg.append(g_cardID);

		}
		else
		{
			m_msg = QString::fromLocal8Bit("注册卡信息失败\n");
			m_msg.append(m_cli.get_msg().c_str());
			m_cli.close();

		}
		QMessageBox::information(NULL, "Title", m_msg);

		m_msg = QString::fromLocal8Bit("卡号: ");
		m_msg.append(g_cardID);
		m_msg.append(QString::fromLocal8Bit("\n扫描ID: "));
		m_msg.append(g_scanID);
		QMessageBox::information(NULL, "Title", m_msg);

		iRet = m_cli.set_scanid(g_cardID.toStdString(), g_scanID.toStdString(), m_user.toStdString());
		if (0 < iRet)
		{
			m_msg = QString::fromLocal8Bit("设置扫描ID成功\nID:");
			m_msg.append(g_scanID);
		}
		else
		{
			m_msg = QString::fromLocal8Bit("设置扫描ID失败\n");
			m_msg.append(m_cli.get_msg().c_str());
			m_cli.close();

		}
		QMessageBox::information(NULL, "Title", m_msg);

		std::map<std::string, std::string> mapUserInfo;
		mapUserInfo["scan_id"] = g_scanID.toStdString();
		//mapUserInfo["card_id"] = sCardID;
		mapUserInfo["pic"] = vec_join(vecPngIDReq, ',');
		mapUserInfo["user"] = m_user.toStdString();

		if (!m_cli.send_info(mapUserInfo))
		{
			m_msg = QString::fromLocal8Bit("发送用户信息失败\n");
			m_msg.append(m_cli.get_msg().c_str());
			m_cli.close();

		}
		else
		{
			m_msg = QString::fromLocal8Bit("发送用户信息成功");
		}

		QMessageBox::information(NULL, "Title", m_msg);

		updateData();

}

void IRScan::addData(int index,QString cardID,QString scanID,QString RegTime)
{
	ui.tableWidget->setItem(index, 0, new QTableWidgetItem(QString::number(index+1)));
	ui.tableWidget->setItem(index, 1, new QTableWidgetItem(cardID));
	ui.tableWidget->setItem(index, 2, new QTableWidgetItem(scanID));
	ui.tableWidget->setItem(index, 7, new QTableWidgetItem(RegTime));

	std::string sScanID = scanID.toStdString();
	QString m_msg;
	std::map<std::string, std::string> mapUserInfoResp;
	int ret = m_cli.get_info(sScanID, mapUserInfoResp);
	if (-1 == ret)
	{
		m_msg = QString::fromLocal8Bit("获取用户信息失败\n");
		m_msg.append(QString::fromLocal8Bit(m_cli.get_msg().c_str()));
		QMessageBox::information(NULL, "Title", m_msg);
		m_cli.close();

		return;
	}
	else if (0 == ret)
	{
		m_msg = QString::fromLocal8Bit("获取用户信息为空");
	//	QMessageBox::information(NULL, "Title", m_msg);
		ui.tableWidget->setItem(index, 3, new QTableWidgetItem(""));
		ui.tableWidget->setItem(index, 4, new QTableWidgetItem(""));
		ui.tableWidget->setItem(index, 6, new QTableWidgetItem(""));
		return;
	}
	else
	{
		m_msg = QString::fromLocal8Bit("获取用户信息成功");
	//	 QMessageBox::information(NULL, "Title", m_msg);
		std::map<std::string, std::string>::iterator it = mapUserInfoResp.begin();
		//for (; it != mapUserInfoResp.end(); ++it)
		//{
		//	m_msg = QString::fromLocal8Bit("获取 ");
		//	m_msg.append(QString::fromLocal8Bit(it->first.c_str()));
		//	m_msg.append("\n");
		//	m_msg.append(QString::fromLocal8Bit(it->second.c_str()));
		//	// QMessageBox::information(NULL, "Title", m_msg);
		//	
		//}

		it = mapUserInfoResp.begin();
		QString rectmp;
		rectmp = it->second.c_str();
		g_age = rectmp;//年龄
		it++;
		rectmp = QString::fromLocal8Bit(it->second.c_str());
		g_ID = rectmp;//证件号
		it++;
		rectmp = QString::fromLocal8Bit(it->second.c_str());
		g_name = rectmp;//姓名
		it++;
		rectmp = it->second.c_str();//图像
		it++;
		rectmp = it->second.c_str();
		it++;
		rectmp = rectmp = it->second.c_str();
		if (rectmp == "0")
			g_gender = QString::fromLocal8Bit("男");//性别
		else
			g_gender = QString::fromLocal8Bit("女");

		ui.tableWidget->setItem(index, 3, new QTableWidgetItem(g_name));
		ui.tableWidget->setItem(index, 4, new QTableWidgetItem(g_gender));
		ui.tableWidget->setItem(index, 6, new QTableWidgetItem(g_age));

		if (mapUserInfoResp.end() != mapUserInfoResp.find("pic"))
		{
			vecPngIDResp.clear();
			int size = split_vec(mapUserInfoResp["pic"].c_str(), vecPngIDResp, ',');
		}
	}



}

void IRScan::conDataBase()
{
	QString m_msg;
	if (m_cli.init(m_ip.toStdString(), atoi(m_port.toStdString().c_str())))
	{
		m_msg = QString::fromLocal8Bit("连接成功");

		QMessageBox::information(NULL, "Title", m_msg);
	}
	else
	{
		m_msg = QString::fromLocal8Bit("连接失败\n请确认IP或端口号");
		QMessageBox::information(NULL, "Title", m_msg);
		return;
	}
	//2-
	std::string sPermissions;
	// 注意： 0表示测试客户端， 1表示正式客户端
	int iRet = m_cli.login_auth(m_user.toStdString().c_str(), m_passwd.toStdString().c_str(), sPermissions, iTestFlag);
	if (0 > iRet)
	{
		m_msg = QString::fromLocal8Bit("获取授权码失败\n");
		m_msg.append(m_cli.get_msg().c_str());
		m_cli.close();
		QMessageBox::information(NULL, "Title", m_msg);
	}
	else
	{
		m_msg = QString::fromLocal8Bit("获取授权码成功\n");
		QString sAuth = QString::fromStdString(m_cli.get_auth().c_str());
		QString sRep1 = sAuth.mid(8, 16);
		QString sRep2('*', sRep1.length());
		sAuth.replace(sRep1, sRep2);
		if (0 == iRet)
		{
			m_msg.append(QString::fromLocal8Bit("测试环境: "));

		}
		//	m_msg.append(sAuth);

		int iPermissions = atoi(sPermissions.c_str());
		permissions_t pt;
		if (iPermissions & 0x01)
		{
			pt.p1 = true;
		}
		if (iPermissions & 0x02)
		{
			pt.p2 = true;
		}
		if (iPermissions & 0x04)
		{
			pt.p3 = true;
		}

		m_msg.append(QString::fromLocal8Bit("\n权限: "));
		m_msg.append(QString::fromLocal8Bit("图像扫描"));
		if (pt.p1)
		{
			m_msg.append(QString::fromLocal8Bit("(√)"));
		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("(×)"));
		}
		m_msg.append(QString::fromLocal8Bit(",图像分析"));
		if (pt.p2)
		{
			m_msg.append(QString::fromLocal8Bit("(√)"));
		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("(×)"));
		}
		m_msg.append(QString::fromLocal8Bit(",系统设置"));
		if (pt.p3)
		{
			m_msg.append(QString::fromLocal8Bit("(√)"));
		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("(×)"));
		}

		if (pt.p1 || pt.p3)
		{
			g_log_flag = 1;
			QMessageBox::information(NULL, "Title", m_msg);

		}
		else
		{
			m_msg.append(QString::fromLocal8Bit("没有权限"));
			QMessageBox::information(NULL, "Title", m_msg);
		}

	}

}

void IRScan::btn_clockWise()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("接口"), QString::fromLocal8Bit("顺时针旋转！"));
}
void IRScan::btn_antiClock()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("接口"), QString::fromLocal8Bit("逆时针旋转！"));
}

void IRScan::btn_camUp()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("接口"), QString::fromLocal8Bit("相机向上！"));
}
void IRScan::btn_camDown()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("接口"), QString::fromLocal8Bit("相机向下！"));
}

void IRScan::btn_camLeft()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("接口"), QString::fromLocal8Bit("相机向左！"));
}
void IRScan::btn_camRight()
{
	QMessageBox::information(NULL, QString::fromLocal8Bit("接口"), QString::fromLocal8Bit("相机向右！"));
}



void IRScan::closeEvent(QCloseEvent* event)
{
	//	QMessageBox::information(NULL, "Title", "Content", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
	IRSDK_Stop(0);
	IRSDK_Destroy(0);
	IRSDK_Quit();
}

void IRScan::imgScan()
{
	//QMessageBox::information(this, tr("Information"), tr("imgProc"));

	ui.stackedWidget->setCurrentWidget(ui.pageScan);
	QIcon icon1;
	icon1.addFile(QStringLiteral(":/IRScan/Scan-Sel"), QSize(), QIcon::Selected, QIcon::Off);
	ui.imgScanAct->setIcon(icon1);

	QIcon icon2;
	icon2.addFile(QStringLiteral(":/IRScan/Sys"), QSize(), QIcon::Selected, QIcon::Off);
	ui.imgSysAct->setIcon(icon2);
	
}

void IRScan::sysSetting()
{
	//QMessageBox::information(this, tr("Information"), tr("imgMerge"));
	ui.stackedWidget->setCurrentWidget(ui.page_sys);
	QIcon icon1;
	icon1.addFile(QStringLiteral(":/IRScan/Scan-Menu"), QSize(), QIcon::Selected, QIcon::Off);
	ui.imgScanAct->setIcon(icon1);

	QIcon icon2;
	icon2.addFile(QStringLiteral(":/IRScan/Sys-Sel"), QSize(), QIcon::Selected, QIcon::Off);
	ui.imgSysAct->setIcon(icon2);
}


void IRScan::btn_scan_Clicked()
{

	QString str=g_IP;

	if (str.isEmpty())
	{
		QMessageBox::information(this, tr("Tips"), tr("Please Connect the Camera First!!!"), tr("OK"));
		return;
	}

	qint32 i32Port;
	ir_ip = str;
	QStringList strlist = ir_ip.split(".");
	i32Port = strlist.at(3).toInt() * 10 + 30005;

	T_IPADDR IpInfo;
	IpInfo.DataPort = i32Port;

	strcpy(IpInfo.IPAddr, ir_ip.toLocal8Bit().data());

	long ret = IRSDK_Create(0, IpInfo, (CBF_IR)FrameProc, NULL, NULL, (void *)(&ui));
	//IRSDK_DeviceCfg(0, 1);
	IRSDK_Connect(0); //连接，设备根据这个包解析主机的端口，IP，MAC 信息

	//	int re=IRSDK_Play(0);
	IRSDK_Connect(0);

}

bool IRScan::eventFilter(QObject *obj, QEvent *event)
{
	if (qobject_cast<QLabel*>(obj) == ui.scanPicShow&&event->type() == QEvent::MouseButtonRelease)
	{
		if (g_flag_play)
		{
			IRSDK_Stop(0);
			g_flag_play = 0;
		}
		else
		{
			g_pData[g_picNum] = new unsigned short[IMAGE_WIDTH*IMAGE_HEIGHT];
			memcpy(g_pData[g_picNum], g_frame.buffer, IMAGE_HEIGHT*IMAGE_WIDTH*sizeof(short));

			QString filePath = g_tempFolder + "\\" + QString::number(g_currentPic) + ".dat";

			char*  path;
			QByteArray t = filePath.toLatin1(); // must
			path = t.data();

			ofstream fout(path);
			for (int i = 0; i < IMAGE_WIDTH*IMAGE_HEIGHT; i++)
			{
				fout << *(g_frame.buffer + i) << ' ';
			}

			fout.close();

			Mat img;
			img.create(IMAGE_HEIGHT, IMAGE_WIDTH, CV_8UC3);

			data2Img(g_pData[g_picNum], img, IMAGE_HEIGHT, IMAGE_WIDTH,  16, 2, 2,22);

			QImage image = QImage((const unsigned char*)(img.data), img.cols, img.rows, QImage::Format_RGB888);

			g_qImgShow[g_picNum] = image.copy();


			QLabel *p = ui.widget_2->findChild<QLabel*>(QString::number((g_currentPic-1+IMAGE_MAX_NUM)%IMAGE_MAX_NUM));
			p->setStyleSheet("border-width: 1px;border-style: solid;border-color: rgb(255, 255, 255);");


			p = ui.widget_2->findChild<QLabel*>(QString::number(g_currentPic));
			QPixmap pixmap = QPixmap::fromImage(g_qImgShow[g_currentPic]);

			QPixmap fitpixmap = pixmap.scaled(p->width(), p->height(), Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放

			p->setPixmap(fitpixmap);
			p->setStyleSheet("border-width: 2px;border-style: solid;border-color: rgb(255, 0, 0);");

			g_currentPic = (g_currentPic + 1) % IMAGE_MAX_NUM;

			if (g_picNum < IMAGE_MAX_NUM) g_picNum++;

			IRSDK_Play(0);
			g_flag_play = 1;

		}
		return true;
	}
	else {
		return false;
		//return QMainWindow::eventFilter(obj, event);
	}
}

void IRScan::btn_focusFar()
{
	IRSDK_NearFarFocus(0, AUTOFOCUS);  //AUTOFOCUS--自动
}

void IRScan::btn_focusNear()
{
	IRSDK_NearFarFocus(0, AUTOFOCUS);
}

void IRScan::btn_sysPar()
{
	dlg = new SettingDlg;

	dlg->show();
}