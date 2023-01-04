#include "std_lib_facilities.h"


int main()
{
	int max = 0;
	int currentNumber = 0;
	vector<int> primeNumbers;

	// Modifique o programa descrito no exercício anterior para receber um valor de entrada max e após encontrar todos os números primos de 1 até max.
	cout << "Type a max number to search all the prime numbers until him: " << endl;
	cin >> max;

	for (int i = 2; i <= max; i++)
	{
		primeNumbers.push_back(i);
	}

	for (int i = 0; i < primeNumbers.size(); i++)
	{
		currentNumber = primeNumbers[i];

		for (int j = currentNumber + 1; j <= primeNumbers.back(); j++)
		{
			if (j % currentNumber == 0)
			{
				auto nToRemove = find(primeNumbers.begin(), primeNumbers.end(), j);

				if (nToRemove < primeNumbers.end())
				{
					primeNumbers.erase(nToRemove);
				}
			}
		}
	}

	for (int i = 0; i < primeNumbers.size(); i++)
	{
		cout << primeNumbers[i] << endl;
	}

	cout << "Total prime numbers: " << primeNumbers.size() << endl;

	return 0;
}