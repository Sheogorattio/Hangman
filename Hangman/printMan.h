#pragma once
#include <iostream>
using namespace std;
class Man
{
	static int max_errors;
	int errors;//�� ����� ������ ������� ��� ����� ����������(4 ������ - ��������)
public:
	Man();
	bool print();
	void setErrNum(int er);
	int getErrNum();
};


