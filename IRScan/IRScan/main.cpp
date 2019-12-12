#include "IRScan.h"
#include <QtWidgets/QApplication>

#include "LogDlg.h"


int main(int argc, char *argv[])
{	

	QApplication::addLibraryPath("./plugins");
	QApplication a(argc, argv);

	//IRScan w;
	//w.show();

	LogDlg w;

	w.show();
	return a.exec();
}
