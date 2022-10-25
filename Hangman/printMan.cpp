#include "printMan.h"

int Man::max_errors = 4;

bool Man::print()
{
	switch (errors)
	{
		case 0:
			cout << " /----\n"
				<< "|    |	\n"
				<< "|  \n"
				<< "|  \n"
				<< "|  \n"
				<< "|__________";
			break;
		case 1:
			cout << " /----\n"
				<< "|    |	\n"
				<< "|    o	\n"
				<< "|   \n"
				<< "|   \n"
				<< "|__________";
		case 2:
			cout << " /----\n"
				<< "|    |	\n"
				<< "|    o	\n"
				<< "|	( )\n"
				<< "|   \n"
				<< "|__________";
			break;
		case 3:
			cout << " /----\n"
				<< "|    |	\n"
				<< "|    o	\n"
				<< "|  /( )\\\n"
				<< "|   \n"
				<< "|__________";
		case 4:
			cout << " /----\n"
				<< "|    |	\n"
				<< "|    o	\n"
				<< "|  /( )\\\n"
				<< "|   / \\\n"
				<< "|__________";
			break;
		default:
			break;
	}
	return errors == max_errors;
}

Man::Man()
{
	errors = 0;
}

void Man::setErrNum(int er)
{
	errors = er;
}

int Man::getErrNum()
{
	return errors;
}
