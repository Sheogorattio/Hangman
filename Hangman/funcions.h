#pragma once
#include<iostream>
#include"funcions.h"
#include"printMan.h"
#include"vocab.h"
#include"word.h"
using namespace std;

int printMenu() {
	cout << "1.Start game\n2.Add word\n3.Exit\n";
	int choise;
	cin >> choise;
	if (choise > 3 || choise < 1) {
		throw "error\nincorrect choise\n";
	}
	return choise;
}

void startGame(vocab& _vocab) {
	Man man;
	word _word(_vocab.getRandomWord());
	char c = ' ';
	while (!_word.isLoser() && !_word.isAllFound()) {//пока число ошибок не станет максимальным
		system("cls");
		man.print(_word.getErrors());
		_word.printUsedLetters();
		_word.printFields();
		cout << "Enter letter:\t";
		cin >> c;
		_word.isnertLetter(c);
	}
	system("cls");
	man.print(_word.getErrors());
	_word.isLoser() ? printf("\nYou lose\n") : printf("\nYou win\n");
	cout << _word.getWord();
	system("pause");
	system("cls");
}