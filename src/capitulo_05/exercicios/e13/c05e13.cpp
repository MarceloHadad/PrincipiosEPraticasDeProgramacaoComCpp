#include "std_lib_facilities.h"

int main()
{
	int n = 0;
	int x = 0;
	int bull = 0;
	int cow = 0;
	bool win = false;
	vector<int> numbers;
	vector<int> guess;

	// Faça uma versão na qual o usuário possa jogar repetidamente (sem parar ou reiniciar o programa) e cada jogo tenha um novo conjunto de quatro dígitos.
	while (true)
	{
		win = false;
		cout << "**New Game**" << endl;

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

				if (guess[i] == numbers[i]) bull++;
				else if (pos < numbers.end()) cow++;
			}
			cout << bull << " bull and " << cow << " cow." << endl;

			if (bull == 4) win = true;
		}

		cout << "WINNER!" << endl << endl;
	}

	return 0;
}