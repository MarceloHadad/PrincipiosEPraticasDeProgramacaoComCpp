#include "std_lib_facilities.h"

// Escreva um programa que leia e armazene uma série de inteiros e depois compute a soma dos N primeiros inteiros. 
int main()
{
	int numbersToSum = 0;
	int n = 0;
	int sum = 0;
	vector<int> numbers;

	// Primeiro pergunte a N, depois leia os valores em um vector, em seguida calcule a soma dos primeiros valores. 
	cout << "Please, type the number of values that you want to sum:" << endl;
	cin >> numbersToSum;

	cout << "Please, type some numbers (type '|' to stop):" << endl;
	while (cin >> n)
	{
		numbers.push_back(n);
	}

	// Trate todas as entradas. Por exemplo, assegure o fornecimento de uma mensagem de erro se o usuário pedir a soma de mais números do que existem no vetor.
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

	return 0;
}