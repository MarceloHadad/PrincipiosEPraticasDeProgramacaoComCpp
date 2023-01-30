#include "std_lib_facilities.h"

// Refaça o jogo "Touros e vacas" do exercício 12 do Capítulo 5, para usar quatro letras em vez de quatro dígitos.
int main()
{
	char c = ' ';
	int bull = 0;
	int cow = 0;
	bool win = false;
	vector<char> letters;
	vector<char> guess;

	srand(time(0));
	while (letters.size() < 4)
	{
		char randomC = ' ';
		// 'A' == 65; 'Z' == 90
		while (randomC < 65)
		{
			randomC = rand() % 90;
		}

		auto posC = find(letters.begin(), letters.end(), randomC);
		if (posC < letters.end()) continue;
		letters.push_back(randomC);
	}

	while (!win)
	{
		bull = 0;
		cow = 0;
		guess.clear();

		cout << "Make your guess: " << endl;
		for (int i = 0; i < letters.size(); i++)
		{
			cin >> c;
			guess.push_back(c);
		}

		for (int i = 0; i < letters.size(); i++)
		{
			auto pos = find(letters.begin(), letters.end(), guess[i]);

			if (guess[i] == letters[i]) bull++;
			else if (pos < letters.end()) cow++;
		}
		cout << bull << " bull and " << cow << " cow." << endl;

		if (bull == 4) win = true;
	}

	cout << "WINNER!" << endl;

	return 0;
}