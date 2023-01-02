#include "std_lib_facilities.h"

int main()
{
	vector<double> temps;
	double temp = 0;
	double median = 0;
	int position = 0;
	double sum = 0;

	while (cin >> temp)
	{
		temps.push_back(temp);
	}

	for (int i = 0; i < temps.size(); i++)
	{
		sum += temps[i];
	}

	cout << "Average temperatures: " << sum / temps.size() << endl;

	sort(temps.begin(), temps.end());

	// Se definirmos a mediana de uma sequência como “o número para o qual exatamente a metade dos elementos da sequência vem antes dele e exatamente a metade vem depois dele”,
	// corrija o programa do §4.6.2 de modo que ele sempre imprima a mediana. Dica: uma mediana não precisa ser um elemento da sequência.
	if (temps.size() % 2 == 0)
	{
		position = temps.size() / 2;
		median = (temps[position] + temps[position - 1]) / 2;
	}

	else
	{
		position = temps.size() / 2;
		median = temps[position];
	}

	cout << "Median temperature: " << median << endl;

	return 0;
}