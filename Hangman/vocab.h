#pragma once
#include <iostream>
#include<fstream>
#include<ctime>
using namespace std;

class vocab
{
	string path;
	int wordCounter;
public:
	vocab();
	vocab(const char* p);
	void addWord(const char* w);
	void clearVocab();
	string getRandomWord();
	void renewWordCount();
	int getWordCount();
};

