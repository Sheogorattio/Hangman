#include<iostream>
#include"funcions.h"
#include"printMan.h"
#include"vocab.h"
#include"word.h"

using namespace std;

int main() {
	int choise=0;
	vocab _vocab("vocab.txt");
	try {
		while (1) {
			choise = printMenu();
			switch (choise) {
				case 1:
					startGame(_vocab);
					break;
				case 2:
					char buff[50];
					cout << "Enter word:\t";
					cin >> buff;
					_vocab.addWord(buff);
					break;
				case 3:
					exit(0);
			}
		}
	}
	catch (const char* s) {
		cout << s;
	}
}
