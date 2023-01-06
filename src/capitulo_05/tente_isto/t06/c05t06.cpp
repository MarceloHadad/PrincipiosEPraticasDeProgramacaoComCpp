#include "std_lib_facilities.h"

// Pesquise.
// Verifique algumas fontes de informação para selecionar bons valores para as constantes temp_baixa (a “temperatura mínima”) e temp_alta (a “temperatura máxima”) de nosso programa.
// Esses valores determinarão os limites de utilidade do nosso programa.
int main()
{
	vector<double> temps;

	double temp = 0;
	double sum = 0;
	// https://www.guinnessworldrecords.com/world-records/highest-recorded-temperature/
	double high_temp = -128.6;
	// https://www.guinnessworldrecords.com/world-records/66137-lowest-temperature-recorded-on-earth
	double low_temp = 134;

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