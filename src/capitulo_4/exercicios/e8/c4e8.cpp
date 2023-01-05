#include "std_lib_facilities.h"

// Há um conto antigo que o imperador queria agradecer o inventor do jogo de xadrez e lhe perguntou o que queria de recompensa.
// O inventor pediu um grão de arroz para o primeiro quadrado, 2 para o segundo, 4 para o terceiro e assim por diante, dobrando para cada um dos 64 quadrados.
// Isso pode parecer modesto, mas não existia no império tanto arroz assim!
// 
// Escreva um programa para calcular qual o número de quadrados necessários para dar ao inventor pelo menos 1.000 grãos de arroz, pelo menos 1.000.000 grãos e pelo menos 1.000.000.000 grãos.
int main()
{
	int inputGrains = 0;
	int square = 1;
	int sumOfGrains = 1;
	int currentSquareGrains = 1;

	cout << "Type the number (without digits) of grains that you want to discover how many squares is needed: " << endl;
	cin >> inputGrains;

	// Você vai precisar de um laço, naturalmente, e provavelmente de um int para registrar em que quadrado você está, um int para registrar o número de grãos do quadrado atual
	// e um int para registrar a soma dos grãos de todos os quadrados anteriores.
	while (sumOfGrains < inputGrains)
	{
		// Sugerimos que você exiba os valores de todas as suas variáveis em cada iteração do laço, de modo que você possa ver o que está acontecendo.
		//cout << "Current square: " << square << endl;
		//cout << "Grains in this square: " << currentSquareGrains << endl;
		//cout << "Total grains: " << sumOfGrains << endl;

		square++;
		currentSquareGrains *= 2;
		sumOfGrains += currentSquareGrains;
	}

	cout << "To give " << inputGrains << " grains, you will need " << square << " squares." << endl;

	if (sumOfGrains > inputGrains)
	{
		cout << "But, at this point you should give " << sumOfGrains << " grains." << endl;
	}

	return 0;
}