#include "std_lib_facilities.h"

int permutation(int, int);
int combination(int, int);
int factorial(int);

int main()
{
	// Esse programa deve ter verificação de erros.
	// Assegure-se de que todos os dados de entrada incorretos irão gerar boas mensagens de erro.
	try
	{
		int n1 = 0, n2 = 0, result = 0;
		char opt = ' ';

		cout << "Type two numbers:\n";

		//Projete um programa que peça ao usuário dois números,
		cin >> n1 >> n2;

		if(!cin) error("Invalid input.");
		if (n1 == 0 || n2 == 0) error("Numbers cannot be zero.");

		// pergunte se ele quer calcular permutações ou combinações
		cout << "Choose an option, 'p' for Permutation or 'c' for Combination:\n";
		cin >> opt;

		switch (opt)
		{
		case 'p':
			result = permutation(n1, n2);
			// e imprima o resultado.
			cout << "There are " << result << " permutations.\n";
			break;
		case 'c':
			result = combination(n1, n2);
			cout << "There are " << result << " combinations.\n";
			break;
		default:
			error("Invalid option, aborting...");
		}

		return 0;
	}
	catch (exception& e)
	{
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...)
	{
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}

int permutation(int a, int b)
{
	//Uma permutação é um subconjunto ordenado de um conjunto.
	// Por exemplo, digamos que você quer selecionar uma combinação para um cofre.
	// Existem 60 números possíveis, e você necessita de três números diferentes para a combinação.
	// Existem *P(60,3)* permutações para a combinação, onde *P* é definido pela fórmula
	//
	//```cpp
	//P(a,b) =  a!
	//        _______
	//        (a-b)!'
	//```
	//
	//onde ! é usado como operador de sufixo para fatorial.
	// Por exemplo, 4! é 4\*3\*2\*1.
	int p = factorial(a) / factorial((a - b));

	return p;
}

int combination(int a, int b)
{
	// Combinações são similares a permutações, exceto que a ordem dos objetos não importa.
	// Por exemplo, se você estiver fazendo uma *banana split* e quiser colocar três sabores diferentes de sorvete,
	// dentre os cinco que estão disponíveis, você não se importaria de colocar uma colher de sorvete de baunilha no início ou no fim;
	// você ainda estaria pondo sabor baunilha.
	// A fórmula para combinações é:
	//
	//```cpp
	//C(a,b) =   P(a,b)
	//            _________
	//                b!
	//```
	int c = permutation(a, b) / factorial(b);

	return c;
}

int factorial(int n)
{
	if (n == 1 || n == 0) return 1;

	return n * factorial(n - 1);
}
