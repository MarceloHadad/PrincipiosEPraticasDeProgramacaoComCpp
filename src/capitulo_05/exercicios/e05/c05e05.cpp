#include "std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
{
	if (c < -273.15) error("Temperature, in Celsius, lowest than the absolute zero!");

	double k = c + 273.15;
	return k;
}

// Incremente o programa, para que ele também converta graus Kelvin para graus Celsius.
double ktoc(double k) // converts Kelvin to Celsius
{
	if (k < 0) error("Temperature, in Kelvin, lowest than the absolute zero!");
	double c = k - 273.15;

	return c;
}

int main()
{
	try
	{
		double inputTempValue = 0; // declares the input variable
		double outputTempValue = 0;
		double result = 0;
		char inputTempUnit = ' ';

		cout << "Type the temperature with his unit:" << endl;
		cout << "Available conversions: C > K, K > C" << endl;
		cin >> inputTempValue >> inputTempUnit;

		switch (inputTempUnit)
		{
		case 'c':
			result = ctok(inputTempValue);
			cout << result << "K" << endl;
			break;
		case 'k':
			result = ktoc(inputTempValue);
			cout << result << "C" << endl;
			break;
		default:
			cout << "Unknown temperature: " + inputTempUnit;
			break;
		}

		return 0;
	}
	catch (exception& e)
	{
		cerr << "[error] " << e.what() << endl;
		return 1;
	}
}