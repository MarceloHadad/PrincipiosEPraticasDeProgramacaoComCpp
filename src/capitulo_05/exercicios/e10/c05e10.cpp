#include "std_lib_facilities.h"

int main()
{
	int numbersToSum = 0;
	double n = 0; 	// Modifique o programa do exerício 8 para usar double em vez de int.
	double sum = 0;
	vector<double> numbers;
	vector<double> numbersDiff; // Além disso, crie um vetor de doubles contendo as N-1 diferenças entre valores adjacentes e imprima este vector de diferenças.

	cout << "Please, type the number of values that you want to sum:" << endl;
	cin >> numbersToSum;

	cout << "Please, type some numbers (type '|' to stop):" << endl;
	while (cin >> n)
	{
		numbers.push_back(n);
	}

	if (numbersToSum > numbers.size())
	{
		cout << "[error] Typed numbers quantity is lower than the number of values that you want to sum." << endl;
		return 1;
	}

	cout << "The sum of the " << numbersToSum << " first numbers: (";

	for (int i = 0; i < numbersToSum; i++)
	{
		sum += numbers[i];

		if (i == numbersToSum - 1)
		{
			cout << numbers[i];
			continue;
		}

		cout << numbers[i] << " ";
	}

	cout << ") is " << sum << endl;

	for (int i = 1; i < numbers.size(); i++)
	{
		double diff = numbers[i-1] - numbers[i];
		numbersDiff.push_back(diff);
		cout << diff << endl;
	}

	return 0;
}