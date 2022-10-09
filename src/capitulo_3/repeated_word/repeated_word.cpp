#include "std_lib_facilities.h"

int main()
{
	string anterior = " "; // palavra anterior; inicializada com uma "não palavra"
	string atual; // palavra atual
	while (cin >> atual) // lê uma sequência de palavras
	{
		if (anterior == atual) // confere se a palavra é a mesma que a anterior
			cout << "palavra repetida: " << atual << '\n';
		anterior = atual;
	}

	return 0;
}