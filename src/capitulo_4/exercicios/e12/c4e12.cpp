#include "std_lib_facilities.h"

bool checkIfIsAPrimeNumber(int n, int limit)
{
	int divisors = 0;
	for (int i = 1; i <= limit; i++)
	{
		if (n % i == 0)
		{
			divisors++;
		}
	}

	if (divisors == 2)
	{
		return true;
	}

	return false;
}
int main()
{
	int max = 0;
	bool isPrime = false;
	vector<int> primeNumbers;

	// Modifique o programa descrito no exercício anterior para receber um valor de entrada max e, após, encontre todos os números primos de 1 até max.
	cout << "Type a max number to search all the prime numbers until him: " << endl;
	cin >> max;

	for (int i = 1; i <= max; i++)
	{
		isPrime = checkIfIsAPrimeNumber(i, max);

		if (isPrime)
		{
			primeNumbers.push_back(i);
		}
	}

	for (int i = 0; i < primeNumbers.size(); i++)
	{
		cout << primeNumbers[i] << endl;
	}

	cout << "Total prime numbers: " << primeNumbers.size() << endl;

	return 0;
}