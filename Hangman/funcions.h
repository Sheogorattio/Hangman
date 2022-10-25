#pragma once
#include<iostream>
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