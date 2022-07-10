#include "std_lib_facilities.h"

int main()
{
	cout << "Por favor, informe um valor em ponto flutuante: ";
	int n;
	cin >> n;
	double m = n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\ntriplo de n == " << 3 * n
		<< "\ndobro de n == " << n + n
		<< "\nn ao quadrado == " << n * n
		<< "\nmetade de n == " << n / 2
		<< "\nraiz quadrada de n == " << sqrt(m)
		<< endl; // outro nome para nova linha ("end of line") na saída

	return 0;
}