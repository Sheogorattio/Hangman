#pragma once
#include <iostream>
using namespace std;
class word
{
	static int max_errors;
	int foundLetters;
	string currentWord;
	string wrongLetters;
	char* fields;
	int errors;
public:
	word(const char* w);
	word(const string& w);
	~word();
	int isnertLetter(char c);//ввод буквы, возврат числа ошибок
	void printFields();//вывод закрытых полей и полей с отгаданными буквами
	string getWord();//для вывода слова, если игрок проиграл
	void printUsedLetters();
	int getErrors();
	bool isLoser();
	bool isAllFound();
};

