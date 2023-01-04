#include "std_lib_facilities.h"

int main()
{
	const char numFirstChar = '0';
	const char numLastChar = '9' + 1;
	const char upperCaseFirstChar = 'A';
	const char upperCaseLastChar = 'Z' + 1;
	
	char currentChar = ' ';
	int currentCharNumber = 0;

	for (int i = upperCaseFirstChar; i < upperCaseLastChar; i++)
	{
		currentChar = i;
		currentCharNumber = i;

		cout << currentChar << "\t" << currentCharNumber << endl;
	}

	cout << endl;

	for (int i = numFirstChar; i < numLastChar; i++)
	{
		currentChar = i;
		currentCharNumber = i;

		cout << currentChar << "\t" << currentCharNumber << endl;
	}
	
	return 0;
}