#include "printMan.h"



void Man::print(int errors)
{
	switch (errors)
	{
	case 0:
		cout << " /----\n"
			<< "|    |	\n"
			<< "|  \n"
			<< "|  \n"
			<< "|  \n"
			<< "|__________\n\n";
		break;
	case 1:
		cout << " /----\n"
			<< "|    |	\n"
			<< "|    o	\n"
			<< "|   \n"
			<< "|   \n"
			<< "|__________\n\n";
		break;
	case 2:
		cout << " /----\n"
			<< "|    |	\n"
			<< "|    o	\n"
			<< "|   ( )\n"
			<< "|   \n"
			<< "|__________\n\n";
		break;
	case 3:
		cout << " /----\n"
			<< "|    |	\n"
			<< "|    o	\n"
			<< "|  /( )\\\n"
			<< "|   \n"
			<< "|__________\n\n";
		break;
	case 4:
		cout << " /----\n"
			<< "|    |	\n"
			<< "|    o	\n"
			<< "|  /( )\\\n"
			<< "|   / \\\n"
			<< "|__________\n\n";
		break;
	default:
		break;
	}
}
