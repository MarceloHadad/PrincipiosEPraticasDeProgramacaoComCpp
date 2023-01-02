#include "std_lib_facilities.h"

// Escreva um programa que se comporta como uma calculadora bem simples.
int main()
{
	double n1 = 0;
	double n2 = 0;
	int result = 0;
	char typedOperator = ' ';

	// Sua calculadora deve poder realizar as quatro operações matemáticas básicas – soma, subtração, multiplicação e divisão – sobre dois valores de entrada.
	// Seu programa deve solicitar ao usuário a digitação de três argumentos: dois valores double e um caractere para representar uma operação.
	// 
	cout << "Type two numbers and the operation that you want to do: " << endl;
	cin >> n1 >> n2 >> typedOperator;
	
	// Se os argumentos de entrada forem 35.6, 24.1 e ‘+’, a saída do programa deve ser “A soma de 35.6 e 24.1 é 59.7”.
	switch (typedOperator)
	{
	case '+':
		result = n1 + n2;
		cout << "The sum of " << n1 << " and " << n2 << " is " << result;
		break;
	case '-':
		result = n1 - n2;
		cout << "The subtraction of " << n1 << " and " << n2 << " is " << result;
		break;
	case '*':
		result = n1 * n2;
		cout << "The multiplication of " << n1 << " by " << n2 << " is " << result;
		break;
	case '/':
		result = n1 / n2;
		cout << "The division of " << n1 << " by " << n2 << " is " << result;
		break;
	default:
		cout << "Unknown operator. Expected: '+', '-', '*' or '/'. Received: '" << typedOperator << "'." << endl;
		break;
	}

	return 0;
}