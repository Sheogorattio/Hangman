#pragma once
#include <iostream>
using namespace std;
class word
{
	string currentWord;
	char* fields;
	int errors;
public:
	word(const char* w);
	word(const string& w);
	~word();
	int isnertLetter(char c);//ввод буквы, возврат числа ошибок
	void printFields();//вывод закрытых полей и полей с отгаданными буквами
	string getWord();//для вывода слова, если игрок проиграл
	char* getFields();//Вывод закрытыъ полей и отгаданных букв
};

