#include "lex_analyzer_GUI.h"
#include"lex_analyzer_bridge.h"

lex_analyzer_GUI::lex_analyzer_GUI(QWidget* parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
	temp_source = new QFile("./temp_source.txt");
	temp_result = new QFile("./temp_result.txt");
}

lex_analyzer_GUI::~lex_analyzer_GUI() {
	/*释放临时文件*/
	remove("./temp_source.txt");
	remove("./temp_result.txt");
}



void lex_analyzer_GUI::open_source_file() {

	sourcefilename = QFileDialog::getOpenFileName(nullptr, "Open Source");

	QFile file(sourcefilename);
	file.open(QIODevice::ReadOnly | QIODevice::Text);
	QByteArray text = file.readAll();
	ui.textEdit->setText(QString(text));
	file.close();

	ui.textEdit_2->setText("");//右侧文本框清空
	ui.label->setText(QFileInfo(sourcefilename).fileName());//提示栏显示文件名
}

void lex_analyzer_GUI::lex_analyze() {
	start_lex_analyze("./temp_source.txt", "./temp_result.txt");
	//在右侧文本框显示结果
	QFile file("./temp_result.txt");
	file.open(QIODevice::ReadOnly | QIODevice::Text);
	QByteArray text = file.readAll();
	ui.textEdit_2->setText(QString(text));
	file.close();
}

void lex_analyzer_GUI::auto_save() {
	QString text = ui.textEdit->toPlainText();//读取文本框中的文件
	temp_source->open(QIODevice::WriteOnly | QIODevice::Text);//打开临时源文件存储
	QTextStream text_stream(temp_source);
	text_stream << text;
	temp_source->close();
}

void lex_analyzer_GUI::savelex_to_file() {
	resultfilename = QFileDialog::getSaveFileName(nullptr, "Result Save As", "./lex_analyzer_result.txt");

	QString text = ui.textEdit_2->toPlainText();
	QFile file(resultfilename);
	file.open(QIODevice::WriteOnly | QIODevice::Text);
	QTextStream text_stream(&file);
	text_stream << text;
	file.close();
}

void lex_analyzer_GUI::saveas_source_to_file() {
	sourcefilename = QFileDialog::getSaveFileName(nullptr, "Source Save As", sourcefilename);

	QString text = ui.textEdit->toPlainText();//读取文本
	QFile file(sourcefilename);
	file.open(QIODevice::WriteOnly | QIODevice::Text);
	QTextStream text_stream(&file);
	text_stream << text;
	file.close();

	ui.label->setText(QFileInfo(sourcefilename).fileName());//提示栏显示文件名

}

void lex_analyzer_GUI::save_source_to_file() {
	if (!sourcefilename.isEmpty()) {
		QString text = ui.textEdit->toPlainText();//读取文本

		QFile file(sourcefilename);
		file.open(QIODevice::WriteOnly | QIODevice::Text);
		QTextStream text_stream(&file);
		text_stream << text;
		file.close();
	}
}
