#include "lex_analyzer_GUI.h"
#include <QtWidgets/QApplication>
#include<QtWidgets/QPushbutton.h>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	lex_analyzer_GUI w;
	w.show();
	return a.exec();
}
