#include "std_lib_facilities.h"

double ctof(double c) // converts Celsius to Fahrenheit
{
	if (c < -273.15) error("Temperature, in Celsius, lowest than the absolute zero!");

	double f = (9.0 / 5) * c + 32;
	return f;
}

double ftoc(double f) // converts Fahrenheit to Celsius
{
	if (f < -459.67) error("Temperature, in Fahrenheit, lowest than the absolute zero!");
	double c = (5.0 / 9) * (f - 32);
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
		cout << "Available conversions: C > F, F > C" << endl;
		cin >> inputTempValue >> inputTempUnit;
		
		inputTempUnit = tolower(inputTempUnit);

		switch (inputTempUnit)
		{
		case 'c':
			result = ctof(inputTempValue);
			cout << result << "F" << endl;
			break;
		case 'f':
			result = ftoc(inputTempValue);
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