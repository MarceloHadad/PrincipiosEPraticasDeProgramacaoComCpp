#include "std_lib_facilities.h"

// Coloque o programa em execução. Configura se sua entrada realmente produz aquela saída.
// Tente “quebrar” o programa (isto é, fazê-lo fornecer mais resultados errados) fornecendo a ele outros conjuntos de dados de entrada.
// Qual é a quantidade mínima de dados de entrada que você pode fornecer para que ele falhe?
int main()
{
	vector<double> temps;

	double temp = 0;
	double sum = 0;
	double high_temp = 0;
	double low_temp = 0;

	while (cin >> temp)
	{
		temps.push_back(temp);
	}

	for (int i = 0; i < temps.size(); i++)
	{
		if (temps[i] > high_temp) high_temp = temps[i];
		if (temps[i] < low_temp) low_temp = temps[i];
		sum += temps[i];
	}

	cout << "Higher temperature: " << high_temp << endl;
	cout << "Lowest temperature: " << low_temp << endl;
	cout << "Medium temperarute: " << sum / temps.size() << endl;

	return 0;
}