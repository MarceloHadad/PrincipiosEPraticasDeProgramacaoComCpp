#include "std_lib_facilities.h"

bool checkIfIsAPrimeNumber(int n)
{
	int divisors = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			divisors++;
		}

		if (divisors > 2)
		{
			return false;
		}
	}

	if (divisors == 2)
	{
		return true;
	}
}

// Escreva um programa que recebe um valor de entrada n e depois encontra os primeiros n números primos.
int main()
{
	int requestedPrimes = 0;
	int findedPrimes = 0;
	int currentNumber = 2;
	vector<int> primeNumbers;

	cout << "How many prime numbers do you want? " << endl;
	cin >> requestedPrimes;

	while (findedPrimes < requestedPrimes)
	{
		if (checkIfIsAPrimeNumber(currentNumber))
		{
			primeNumbers.push_back(currentNumber);
			findedPrimes++;
		}

		currentNumber++;
	}

	for (int i = 0; i < primeNumbers.size(); i++)
	{
		cout << primeNumbers[i] << endl;
	}

	return 0;
}