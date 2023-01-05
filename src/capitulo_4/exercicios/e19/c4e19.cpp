#include "std_lib_facilities.h"

// Escreva um programa em que você primeiro entra com um conjunto de pares de nome e valor, tais como Joe 17 e Barbara 22.
int main()
{
	string name = "";
	int point = 0;
	bool keepInTheLoop = true;
	vector<string> names;
	vector<int> points;

	cout << "To stop loop type 'No longer'." << endl;

	while (keepInTheLoop)
	{
		cout << "Enter the name followed by the points: " << endl;
		cin >> name >> point;

		// Encerre a entrada com a linha “Não mais” (“mais” irá provocar um erro na tentativa de ler outro inteiro).
		if (point == 0)
		{
			keepInTheLoop = false;
			continue;
		}

		// Verifique se cada nome é único e termine com uma mensagem de erro se um nome for fornecido duas vezes.
		auto stringPos = find(names.begin(), names.end(), name);

		// Para cada par, coloque o nome em um vector chamado nomes e o número em um vector chamado pontos (em posições correspondentes, de modo que se nomes[7]==”Joe” então pontos[7]==17).
		if (stringPos >= names.end())
		{
			names.push_back(name);
			points.push_back(point);
		}

		else
		{
			cout << "This name already exists." << endl;
			continue;
		}
	}

	// Escreva todos os pares (nome, pontos), um por linha. 
	for (int i = 0; i < names.size(); i++)
	{
		cout << names[i] << " " << points[i] << endl;
	}
}