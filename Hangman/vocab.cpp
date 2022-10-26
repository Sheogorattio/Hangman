#include "vocab.h"

vocab::vocab()
{
	cout << "enter path:\t";
	cin >> path;
	wordCounter = 0;
}

vocab::vocab(const char* p)
{
	path = p;
	wordCounter = 0;
}

void vocab::addWord(const char* w)
{
	ofstream outConsole(path, ios::app | ios::out);
	outConsole << endl << w;
	
	outConsole.close();
}

void vocab::clearVocab()
{
	fstream cleanFile("vocab.txt", ios::out | ios::trunc);
	cleanFile.close();
}

string vocab::getRandomWord()
{
	srand(time(NULL));
	ifstream inConsole(path, ios::out);
	int num = 1+ rand()%getWordCount();
	
	string _word;
	for (int i = 0; i < num; i++) {
		inConsole >> _word;
	}
	inConsole.close();
	return _word;
}

void vocab::renewWordCount()
{
	ifstream outFile(path, ios::out);
	char c;
	while (!outFile.eof()) {
		c = outFile.get();
		if (c == '\n') wordCounter++;
	}
	outFile.close();
}

int vocab::getWordCount()
{
	renewWordCount();
	return wordCounter;
}
