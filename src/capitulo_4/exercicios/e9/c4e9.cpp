#include "std_lib_facilities.h"

int main()
{
	double maxDouble = numeric_limits<double>::max();
	double sumOfGrainsDouble = 1;
	double currentSquareGrainsDouble = 1;
	int squareDouble = 1;

	int maxInt = numeric_limits<int>::max();
	int sumOfGrainsInt = 1;
	int currentSquareGrainsInt = 1;
	int squareInt = 1;

	while (sumOfGrainsDouble < maxDouble)
	{
		squareDouble++;
		currentSquareGrainsDouble *= 2;

		if ((sumOfGrainsDouble + currentSquareGrainsDouble) > maxDouble)
		{
			squareDouble--;
			break;
		}

		sumOfGrainsDouble += currentSquareGrainsDouble;
	}

	while (sumOfGrainsInt < maxInt)
	{
		squareInt++;
		currentSquareGrainsInt *= 2;
		sumOfGrainsInt += currentSquareGrainsInt;
	}

	// Qual é o maior número de quadrados para os quais você pode calcular o número exato de grãos (usando um int)?
	cout << "The greater squares number for which I can calculate the exact number of grains (using a int) is: " << squareInt << endl;
	cout << "With " << squareInt << " squares we have " << sumOfGrainsInt << " grains." << endl;

	cout << endl;

	// Qual é o maior número de quadrados para os quais você pode calcular o número aproximado de grãos (usando um double)?
	cout << "The greater squares number for which I can calculate the approximated number of grains (using a double) is: " << squareDouble << endl;
	cout << "With " << squareDouble << " squares we have " << sumOfGrainsDouble << " grains." << endl;

	return 0;
}