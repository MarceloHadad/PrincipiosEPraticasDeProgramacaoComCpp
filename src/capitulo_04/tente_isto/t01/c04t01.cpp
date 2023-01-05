#include "std_lib_facilities.h"

int main()
{
	const double yen = 0.007628762;
	const double euro = 1.0732587;
	const double poundSterling = 1.2101545;
	double value = 0;
	char currencyUnity = ' ';
	double toDollar = 0.0;
	int precision = 0;

	cout << "Please, type the value followed by currency unit (yen, euro or pound):" << endl;
	cin >> value >> currencyUnity;

	if (value <= 0)
	{
		cout << "Value cannot be zero." << endl;
		return 1;
	}

	if (currencyUnity == 'y')
	{
		toDollar = value * yen;

		if (toDollar < 0.01)
		{
			precision = 4;
		}
		else if (toDollar < 0.1)
		{
			precision = 3;
		}
		else
		{
			precision = 2;
			toDollar = round(toDollar * 1000.0) / 1000.0;
		}

		cout << value << " Japanese Yen equals " << setprecision(precision) << fixed << toDollar << " United States Dollar";
	}

	else if (currencyUnity == 'e')
	{
		toDollar = value * euro;
		cout << value << " Euro equals " << setprecision(2) << fixed << toDollar << " United States Dollar";
	}

	else if (currencyUnity == 'p')
	{
		toDollar = value * poundSterling;
		cout << value << " Pound sterling equals " << setprecision(2) << fixed << toDollar << " United States Dollar";
	}

	else
	{
		cout << "Sorry, this currency unity " << currencyUnity << " is unknow.";
	}

	return 0;
}