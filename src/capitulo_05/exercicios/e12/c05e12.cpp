#include "std_lib_facilities.h"

// Implemente um pequeno jogo de adivinhação chamado (por alguma razão obscura) de "Touros e Vacas".
int main()
{
	int n = 0;
	int bull = 0;
	int cow = 0;
	bool win = false;
	vector<int> numbers;
	vector<int> guess;

	// O programa possui um vetor de quatro números inteiros, no intervalo de 0 a 9, e a tarefa do usuário é descobrir quais são estes números atráves de palpites sucessivos.
	srand(time(0));
	while (numbers.size() < 4)
	{
		int randomN = rand() % 9;
		auto pos = find(numbers.begin(), numbers.end(), randomN);
		if (pos < numbers.end()) continue;
		numbers.push_back(randomN);
	}

	while (!win)
	{
		bull = 0;
		cow = 0;
		guess.clear();

		cout << "Make your guess: " << endl;
		for (int i = 0; i < numbers.size(); i++)
		{
			cin >> n;
			guess.push_back(n);
		}

		for (int i = 0; i < numbers.size(); i++)
		{
			auto pos = find(numbers.begin(), numbers.end(), guess[i]);

			// Digamos que os números a adivinhar são **1 2 3 4** e o palpite do usuário é **1 3 5 9**;
			if (guess[i] == numbers[i]) bull++; // a resposta deve ser "1 touro e 1 vaca", por que o usuário conseguiu um dígito certo (1) na posição certa (um touro)
			else if (pos < numbers.end()) cow++; // e um dígito certo (3) mas na posição errada (uma vaca).
		}
		cout << bull << " bull and " << cow << " cow." << endl;

		if (bull == 4) win = true; // A adivinhação prossegue até que o usuário consiga os quatro touros, isto é, tenha os quatro dígitos certos na ordem correta.
	}

	cout << "WINNER!" << endl;

	return 0;
}