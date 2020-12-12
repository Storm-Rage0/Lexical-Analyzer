#pragma once

#include <QtWidgets/QMainWindow>
#include<QtWidgets/QFileDialog.h>
#include<QtWidgets/QMessageBox.h>
#include<qtextstream.h>
#include "ui_lex_analyzer_GUI.h"

class lex_analyzer_GUI : public QMainWindow
{
	Q_OBJECT

public:
	lex_analyzer_GUI(QWidget* parent = Q_NULLPTR);
	~lex_analyzer_GUI();

private:
	Ui::lex_analyzer_GUIClass ui;
	QString sourcefilename;
	QString resultfilename;
	QFile* temp_source, * temp_result;

private slots:

	void open_source_file();//打开源代码文件
	void lex_analyze();//进行分析
	void savelex_to_file();//保存词法分析结果到文件
	void auto_save();//文本更改后自动保存
	void saveas_source_to_file();//另存修改后的源代码
	void save_source_to_file();//保存修改后的源代码
};
