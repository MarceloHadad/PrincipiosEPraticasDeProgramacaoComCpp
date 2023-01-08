#include "std_lib_facilities.h"

// Crie uma função que, dados a, b, c, imprima as raízes de uma equação do segundo grau e lance uma exceção se b²-4ac for menor do que zero.
void baskara(int a, int b, int c)
{
	double delta = (b * b) - 4 * a * c;

	// Porém, existe um problema: se b²-4ac é menor do que zero, ela vai falhar.
	// Quando o programa detectar uma equação sem raízes reais, ela deve imprimir uma mensagem.
	if (delta < 0) error("Delta is " + to_string(delta) + "! Aborting..");

	double positiveRoot = (-b + sqrt(delta)) / (2 * a);
	double negativeRoot = (-b - sqrt(delta)) / (2 * a);

	cout << "Positive root: " << positiveRoot << endl;
	cout << "Negative root: " << negativeRoot << endl;
}

// Escreva um programa que possa calcular x usando a fórmula de Báskara.
// Equações do segundo grau têm a forma ax²+bx+c=0
// Para resolvê-las, se usa a fórmula de Báskara: x = (-  b ± √b² - 4ac) / 2a

int main()
{
	try
	{
		int a = 0;
		int b = 0;
		int c = 0;

		// Faça a função main() chamar a sua função.
		cout << "Type the values of a, b and c:" << endl;
		cin >> a >> b >> c;

		baskara(a, b, c);
	}
	catch (exception& e)
	{
		cout << "[error] " << e.what() << endl;
	}

	return 0;
}