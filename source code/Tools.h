#pragma once
#ifndef TOOLS
#define TOOLS

#include <vector>
#include <string>

using namespace std;

enum LEXICAL_TYPE {
	LINTEGER, LFLOAT, LKEYWORD, LIDENTIFIER, LTYPE, LDELIMITER, LUNKNOWN, LEOF, LOPERATOR, LINCLUDE, LDEFINE,
	LBEGIN, LCFLOAT, LCDOUBLE, LCCHAR, LCSTRING, LCERROR, LOERROR
};

struct WordInfo//词法属性
{
	LEXICAL_TYPE type;//词类型
	string value;//单词符号
	string word_string;//进行语义分析时的符号，助记符

	//仅在函数调用的产生式用到，表示函数在全局表中的序号
	int index;//种别编码
};


#endif
