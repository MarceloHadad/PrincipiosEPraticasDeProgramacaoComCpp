#include "std_lib_facilities.h"

// Escreva um programa para jogar o jogo “Pedra, Papel, Tesoura”.]
// Se você não conhece este jogo, faça alguma pesquisa (por ex., na Web usando o Google). A pesquisa é uma tarefa comum para programadores.
int main()
{
	char userOption = ' ';
	char pcOption = ' ';
	string winner = "";

	// Além disso, a máquina deve dar algumas respostas randômicas (isto é, selecionar a próxima pedra, papel ou tesoura randomicamente).
	// A randomização real é difícil de usar neste momento. Portanto, apenas construa um vector com uma sequência de valores a serem usados como “o próximo valor”.
	vector<char> options = { 'r', 's', 'p' };

	cout << "Info: r for Rock, s Scissors and p for Paper" << endl;
	cout << "Player 1, make your choice  (r, s, p): " << endl;
	cin >> userOption;

	// Se você construir o vector no programa, ele vai sempre jogar o mesmo jogo, de modo que você poderia deixar o usuário entrar com os valores.
	// Tente variações para tornar menos fácil para o usuário adivinhar que movimento a máquina irá fazer a seguir.
	srand(time(0));
	pcOption = options[rand() % 3];
	cout << "PC choice: " << pcOption << endl;

	if (userOption == pcOption)
	{
		cout << "It's a draw!";
		return 0;
	}

	// Use um comando switch para resolver este exercício.
	switch (userOption)
	{
	case 'r':
		if (pcOption == 'p')
		{
			winner = "PC";
			break;
		}
		winner = "User";
		break;

	case 's':
		if (pcOption == 'r')
		{
			winner = "PC";
			break;
		}
		winner = "User";
		break;

	case 'p':
		if (pcOption == 's')
		{
			winner = "PC";
			break;
		}
		winner = "User";
		break;

	default:
		cout << "The option " << userOption << " is invalid!" << endl;
		return 0;
	}

	cout << "The winner is " << winner << endl;

	return 0;
}