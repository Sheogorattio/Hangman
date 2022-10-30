#include<iostream>
#include"funcions.h"
#include"printMan.h"
#include"vocab.h"
#include"word.h"

using namespace std;

int main() {
	int choice=0;
	vocab _vocab("vocab.txt");
	try {
		while (1) {
			system("cls");
			choice = printMenu();
			switch (choice) {
				case 1:
					startGame(_vocab);
					break;
				case 2:
					addWord(_vocab);
					break;
				case 3:
					clearVocab(_vocab);
					break;
				case 4:
					exit(0);
			}
		}
	}
	catch (const char* s) {
		cout << s;
	}
}