#include "std_lib_facilities.h"

int main()
{
	string input = "";
	vector<string> names = { "Joe", "Barbara"};
	vector<int> points = {17, 22};

	// Modifique o programa do exercício 19, de modo que quando você fornece um nome, o programa exiba na saída os pontos correspondentes ou “nome não encontrado”.
	cout << "Type the name to search for: " << endl;
	cin >> input;
	
	auto namePos = find(names.begin(), names.end(), input);

	if (namePos < names.end())
	{
		int index = namePos - names.begin();
		cout << points[index] << endl;
	}

	else
	{
		cout << "Name not found." << endl;
	}

	return 0;
}