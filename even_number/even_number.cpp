#include "std_lib_facilities.h"

int main()
{
	int number = 0;
	cout << "Digite um número:\n";
	cin >> number;

	if (number % 2 == 0)
	{
		cout << "O número " << number << " é par.\n";
	}

	else
	{
		cout << "O número " << number << " é impar.\n";
	}
}