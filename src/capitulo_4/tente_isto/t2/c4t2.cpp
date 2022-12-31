#include "std_lib_facilities.h"

int main()
{
	const double yen = 0.007628762;
	const double euro = 1.0732587;
	const double poundSterling = 1.2101545;
	const double yuan = 0.14456765;
	const double krona = 0.095933067;

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

	switch (currencyUnity)
	{
	case 'y':
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
		break;

	case 'e':
		toDollar = value * euro;
		cout << value << " Euro equals " << setprecision(2) << fixed << toDollar << " United States Dollar";
		break;

	case 'p':
		toDollar = value * poundSterling;
		cout << value << " Pound sterling equals " << setprecision(2) << fixed << toDollar << " United States Dollar";
		break;

	case 'c':
		toDollar = value * yuan;
		cout << value << " Chinese Yuan equals " << setprecision(2) << fixed << toDollar << " United States Dollar";
		break;

	case 'k':
		toDollar = value * krona;
		cout << value << " Swedish Krona equals " << setprecision(2) << fixed << toDollar << " United States Dollar";
		break;

	default:
		cout << "Sorry, this currency unity '" << currencyUnity << "' is unknow.";
		break;
	}

	return 0;
}