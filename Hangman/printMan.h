#pragma once
#include <iostream>
using namespace std;
class Man
{
	static int max_errors;
	int errors;//от числа ошибок зависит что будет изображено(4 ошибки - максимум)
public:
	Man();
	bool print();
	void setErrNum(int er);
	int getErrNum();
};


