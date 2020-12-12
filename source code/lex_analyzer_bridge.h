#pragma once
/*前端调用后端的中间层*/
#ifndef LEX_BRIDGE
#define LEX_BRIDGE
#include"lex_analyzer.h"
void start_lex_analyze(string source_file, string result_file) {//根据源文件和结果文件的文件名，进行分析
	LexAnalyzer demo(result_file);
	if (demo.Open_Success(source_file))
		while (demo.GetWord().type != LEOF);
	else
		cout << "error";
}


#endif // !LEX_BRIDGE
