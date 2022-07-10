#include "std_lib_facilities.h"

int main()
{
	string numPorExtenso = "";
	int num = -1;

	cout << "Type a number in full:\n";
	cin >> numPorExtenso;

	transform(numPorExtenso.begin(), numPorExtenso.end(), numPorExtenso.begin(), ::toupper);

	if (numPorExtenso == "ZERO")
	{
		num = 0;
	}

	else if (numPorExtenso == "ONE")
	{
		num = 1;
	}

	else if (numPorExtenso == "TWO")
	{
		num = 2;
	}

	else if (numPorExtenso == "THREE")
	{
		num = 3;
	}

	else if (numPorExtenso == "FOUR")
	{
		num = 4;
	}
	
	else
	{
		cout << "I don't know this number.\n";
	}
	
	if (num > -1)
	{
		cout << num;
	}
}