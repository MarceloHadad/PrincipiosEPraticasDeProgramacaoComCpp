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

	// O zero absoluto é a menor temperatura que pode ser atingida; ela é igual a -273,15°C ou 0K.
	// Coloque uma verificação no programa principal que irá acusar um erro se a temperatura fornecida for abaixo de -273,15°C
	if (c < -273.15)
	{
		cout << "Temperature, in Celsius, lowest than the absolute zero!";
		return 1;
	}

	double k = ctok(c);    // converts the temperature
	cout << k << endl;
}

// O programa acima, mesmo após ter sido corrigido, vai produzir resultados errados quando for fornecida uma temperatura abaixo do zero absoluto.