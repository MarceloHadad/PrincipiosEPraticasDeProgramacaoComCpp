#include "std_lib_facilities.h"

int mySquare(int x)
{
	int result = 0;

	for (int i = 0; i < x; i++)
	{
		result += x;
	}

	return result;
}

int main()
{
	for (int i = 0; i < 100; i += 2)
		cout << i << '\t' << mySquare(i) << '\n';

	return 0;
}