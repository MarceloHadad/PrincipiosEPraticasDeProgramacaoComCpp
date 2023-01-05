#include "std_lib_facilities.h"

// Crie um programa para encontrar todos os números primos entre 1 e 100.
// Existe um método clássico para fazer isto, chamado de "Crivo de Erastótenes”.
// Se você não conhece esse método, vá para Web e procure por ele.
// Escreva seu programa usando este método.
int main()
{
	int currentNumber = 0;
	vector<int> primeNumbers;

	for (int i = 2; i <= 1000; i++)
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