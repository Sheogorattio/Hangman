#include "word.h"

int word::max_errors = 4;

word::word(const char* w)
{
	foundLetters = 0;
	errors = 0;
	currentWord = w;
	int charStrSize = currentWord.size() + 1;
	fields = new char[charStrSize];
	for (int i = 0; i < charStrSize; i++) {
		fields[i] = '-';
	}
	fields[charStrSize-1] = '\0';
}

word::word(const string& w)
{
	foundLetters = 0;
	errors = 0;
	currentWord = w;
	int charStrSize = currentWord.size()+1;
	fields = new char[charStrSize];
	for (int i = 0; i < charStrSize; i++) {
		fields[i] = '-';
	}
	fields[charStrSize-1] = '\0';
}


word::~word()
{
	delete[] fields;
}

int word::isnertLetter(char c)
{
	bool check = 1;
	for (int i = 0; i <= currentWord.size(); i++) {//поиск есть ли буква в слове
		if (c == currentWord[i]) {
			fields[i] = c;
			foundLetters++;
			check = 0;
		}
	}
	if (check) {//добавление буквы в список ошибок, если она не добавлялась в него ранее
		errors++;
	}
	if (wrongLetters.find(c) == string::npos) {
		wrongLetters.insert(wrongLetters.end(), c);
	}
	return errors;
}

void word::printFields()
{
	cout << fields << endl;
}

string word::getWord()
{
	return currentWord;
}


void word::printUsedLetters()
{
	cout << "\nUsed letters:\n";
	string::iterator iter;
	for (iter = wrongLetters.begin(); iter != wrongLetters.end(); iter++) {
		cout << *iter << " ";
	}
	cout << "\n\n";
}

int word::getErrors()
{
	return errors;
}

bool word::isLoser()
{
	return errors == max_errors;
}

bool word::isAllFound()
{
	return foundLetters == currentWord.size();
}
