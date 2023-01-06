#include "std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
{
	double k = c + 273.15;
	return k;
}

int main()
{
	double c = 0;  // declares the input variable
	cin >> c;   // searches the temperature for input variable
	double k = ctok(c);    // converts the temperature
	cout << k << endl;
}

// Este código possui muitos erros. Encontre os erros, relacione-os e corrija o código.
// 
// Missing inclusion of the std_lib_facilities.h.
// Missing end of command char ';'. => return int
// Invalid return, int is not a value. => return int;
// The type of k is not the same type defined in the function. => int k
// Variable d not defined. => cin >> d;
// Passing the wrong argumento to ctok(). => double k = ctok("c"); 
// Cout in PascalCase. => Cout