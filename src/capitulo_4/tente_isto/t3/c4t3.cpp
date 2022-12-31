#include "std_lib_facilities.h"

int main()
{
	const char firstChar = 'a';
	const char lastChar = 'z' + 1;
	char currentChar = firstChar;
	int currentCharNumber = firstChar;

	while (currentChar != lastChar)
	{
		cout << currentChar << "\t" << currentCharNumber << endl;

		currentChar++;
		currentCharNumber++;
	}

	return 0;
}