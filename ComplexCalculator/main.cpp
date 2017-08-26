#include "ComplexCalculator.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ComplexCalculator w;
	w.show();
	return a.exec();
}
