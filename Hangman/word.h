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
	int isnertLetter(char c);//���� �����, ������� ����� ������
	void printFields();//����� �������� ����� � ����� � ����������� �������
	string getWord();//��� ������ �����, ���� ����� ��������
	char* getFields();//����� �������� ����� � ���������� ����
};

