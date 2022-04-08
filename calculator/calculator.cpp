#include "std_lib_facilities.h"

int main()
{
	char op;
	double n1 = 0;
	double n2 = 0;
	cout << "Type one operator and two operands:\n";
	cin >> op >> n1 >> n2;

	if (op == '+' )
	{
		cout << n1 + n2;
	}

	else if (op == '-')
	{
		cout << n1 - n2;
	}

	else if (op == '*')
	{
		cout << n1 * n2;
	}

	else if (op == '/')
	{
		cout << n1 / n2;
	}
}