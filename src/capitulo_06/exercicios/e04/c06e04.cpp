#include "std_lib_facilities.h"

// Defina uma classe **Nome_valor** que armazena uma cadeia de caracteres e um valor.
class ScoreBoard
{
public:
	string name;
	int point;

	// Coloque um construtor (algo parecido com o de **Token**).
	ScoreBoard(string str, int n)
		:name(str), point(n)
	{
	}
};

bool checkIfNameExists(vector<ScoreBoard> vec, string searchedName)
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].name == searchedName) return true;
	}

	return false;
}

// Escreva um programa em que você primeiro entra com um conjunto de pares de nome e valor, tais como Joe 17 e Barbara 22.
int main()
{
	string name = "";
	int point = 0;
	bool keepInTheLoop = true;
	bool nameExists = true;
	vector<ScoreBoard> scoreBoard; // Refaça o exercício 19 do Capítulo 4 para usar um **vector<Nome_valor>** em vez de dois **vector**.

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
		nameExists = checkIfNameExists(scoreBoard, name);

		// Para cada par, coloque o nome em um vector chamado nomes e o número em um vector chamado pontos (em posições correspondentes, de modo que se nomes[7]==”Joe” então pontos[7]==17).
		if (nameExists)
		{
			cout << "This name already exists." << endl;
			continue;
		}

		ScoreBoard t = ScoreBoard(name, point);
		scoreBoard.push_back(t);
	}

	// Escreva todos os pares (nome, pontos), um por linha. 
	for (int i = 0; i < scoreBoard.size(); i++)
	{
		cout << scoreBoard[i].name << " " << scoreBoard[i].point << endl;
	}

	return 0;
}