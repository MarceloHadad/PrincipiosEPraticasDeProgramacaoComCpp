#include "std_lib_facilities.h"

// Uma maneira de fazer isto é escrever uma função que irá verificar se o número é primo
// (isto é, ver se o número pode ser dividido por um número primo menor do que ele)
// Considere 2 o primeiro primo.
bool checkIfIsAPrimeNumber(int n)
{
	int divisors = 0;
	for (int i = 1; i <= 100; i++)
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
// Crie um programa para encontrar todos os números primos entre 1 e 100.
int main()
{
	bool isPrime = false;
	// usando um vector de números primos ordenados
	// (de modo que se o vector é denominado primos, primos[0]==2, primos[1]==3, primos[2]==5, etc.).
	vector<int> primeNumbers;

	// Depois, escreva um laço que vai de 0 a 100, verifica cada número para ver se é um primo e armazena cada primo encontrado em um vector.
	for (int i = 1; i <= 100; i++)
	{
		isPrime = checkIfIsAPrimeNumber(i);

		if (isPrime)
		{
			primeNumbers.push_back(i);
		}
	}

	// Escreva outro laço que lista os primos encontrados.
	for (int i = 0; i < primeNumbers.size(); i++)
	{
		cout << primeNumbers[i] << endl;
	}

	return 0;
}