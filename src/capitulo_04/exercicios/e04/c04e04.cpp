#include "std_lib_facilities.h"

bool validateOption(char option)
{
	if (option == 'y' || option == 'n')
	{
		return true;
	}

	return false;
}

// Escreva um programa para um jogo de adivinhação de números.
int main()
{
	int n = 0;
	char opt = ' ';
	bool isValidOption = false;
	int start = 0;
	int end = 100;
	int guess = (start + end) / 2;
	int tries = 0;

	// O usuário pensa em um número entre 1 e 100 e o seu programa faz perguntas para descobrir qual é o número
	// (por ex., “O número que você está pensando é menor do que 50?”).
	cout << "Type a number between 1 and 100" << endl;
	cin >> n;

	if (n < 1 || n > 100)
	{
		cout << "Invalid entry, aborting.." << endl;

		return 0;
	}

	while (guess != n)
	{
		tries++;

		// Seu programa deve poder adivinhar o número após fazer no máximo 7 perguntas.
		if (tries >= 7)
		{
			cout << "I've failed, auto destroying activated.." << endl;

			return 0;
		}

		isValidOption = false;
		while (!isValidOption)
		{
			cout << "The number you have typed is bigger than " << guess << " ? (y/n)" << endl;
			cin >> opt;

			isValidOption = validateOption(opt);
		}

		if (opt == 'y')
		{
			start = guess + 1;
		}

		else
		{
			end = guess - 1;
		}

		guess = (start + end) / 2;
	}

	cout << "You typed " << guess << endl;
	cout << "I've needed " << tries << " tries" << endl;

	return 0;
}