#include "std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
{
	// Faça novamente o exercício 3, mas desta vez trate o erro dentro de ctok()
	if (c < -273.15) error("Temperature, in Celsius, lowest than the absolute zero!");

	double k = c + 273.15;
	return k;
}

int main()
{
	try
	{
		double c = 0;  // declares the input variable
		cin >> c;   // searches the temperature for input variable
		double k = ctok(c);    // converts the temperature
		cout << k << endl;

		return 0;
	}
	catch (exception& e)
	{
		cerr << "[error] " << e.what() << endl;
		return 1;
	}
}