#include "IRScan.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	IRScan w;
	w.show();
	return a.exec();
}
