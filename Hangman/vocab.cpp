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
	cout << "enter new word:\n";
	char* _word = new char[50];
	cin >> _word;
	outConsole << endl << _word;
	delete[] _word;
	outConsole.close();
}

void vocab::clearVocab()
{
	fstream cleanFile("vocab.txt", ios::out | ios::trunc);
	cleanFile.close();
}

string vocab::getRandomWord()
{
	ifstream inConsole(path, ios::out);
	int num;
	cout << "enter num:\t";
	cin >> num;
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
