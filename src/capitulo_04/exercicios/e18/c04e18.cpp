#include "std_lib_facilities.h"

// Escreva um programa para resolver equações do segundo grau. Uma equação do segundo grau tem a forma ax²+bx+c=0
// Se você não conhece a fórmula de Báskara para resolver uma expressão assim, faça alguma pesquisa.
// Lembre-se: pesquisar como resolver um problema é muitas vezes necessário antes que o programador possa ensinar ao computador como resolvê-lo.
int main()
{
	// Use doubles para os dados de entrada do usuário para a, b, c.
	double a = 2;
	double b = -16;
	double c = -18;
	// Como existem duas soluções para uma equação do segundo grau, forneça como saídas x1 e x2.
	double x1 = 0;
	double x2 = 0;
	double delta = 0;

	cout << "Type now: " << endl;
	cin >> a >> b >> c;

	delta = (b * b) - 4 * a * c;

	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);

	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;

	return 0;
}

