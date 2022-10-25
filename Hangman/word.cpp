#include "word.h"

word::word(const char* w)
{
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
	for (int i = 0; i <= currentWord.size(); i++) {
		if (c == currentWord[i]) {
			fields[i] = c;
			check = 0;
		}
	}
	if (check) errors++;
	return errors;
}

void word::printFields()
{
	cout << fields;
}
