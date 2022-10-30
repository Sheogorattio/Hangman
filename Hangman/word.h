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
	int isnertLetter(char c);//���� �����, ������� ����� ������
	void printFields();//����� �������� ����� � ����� � ����������� �������
	string getWord();//��� ������ �����, ���� ����� �������� ����
	void printUsedLetters();//�������, ������� �������������
	int getErrors();
	bool isLoser();// 1 ���� ����� ������ �������� ���������
	bool isAllFound();// 1 ���� ������ ��� �������� �����
};

