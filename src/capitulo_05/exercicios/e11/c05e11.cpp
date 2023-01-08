#include "std_lib_facilities.h"

// Escreva um programa que imprima os primeiros valores da série de Fibonacci, isto é, a série que inicia com 1 1 2 3 5 8 13 21 34.
// O próximo número da série é a soma dos dois anteriores.

int main()
{
	vector<int> fibonacci = {1, 1};
	int curFibonacci = 0;

	for (int i = 1; i < INT_MAX; i++)
	{
		curFibonacci = fibonacci[i] + fibonacci[i - 1];
		if (curFibonacci < 0)
		{
			break;
		}
		fibonacci.push_back(curFibonacci);
	}

	for (int i = 0; i < 10; i++)
	{
		cout << fibonacci[i] << " ";
	}

	// Encontre o maior número da série de Fibonacci que cabe em um int.
	cout << "Last Fibonacci that can be put in int type: " << fibonacci.back();

	return 0;
}