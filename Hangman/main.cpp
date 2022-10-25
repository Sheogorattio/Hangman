#include<iostream>
#include"funcions.h"
#include"printMan.h"
#include"vocab.h"
#include"word.h"

using namespace std;

int main() {
	string test = "word";
	word str(test);
	str.printFields();
}
