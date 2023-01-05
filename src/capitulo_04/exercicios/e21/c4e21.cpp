#include "std_lib_facilities.h"

int main()
{
	// Modifique o programa do exercício 19 de modo que quando você fornece um inteiro, o programa exiba na saída todos os nomes com esses pontos ou “pontos não encontrados”.

	string input = "";
	int num = 0;
	vector<string> names = { "Joe", "Barbara"};
	vector<int> points = {17, 22};

	cout << "Type the name to search for: " << endl;
	cin >> input;
	
	if (isdigit(input[0]))
	{
		num = stoi(input);
		auto numPos = find(points.begin(), points.end(), num);

		if (numPos >= points.end())
		{
			cout << "Points not found." << endl;
		}

		for (int i = 0; i < points.size(); i++)
		{
			if (points[i] == num)
			{
				cout << names[i] << endl;
			}
		}
	}

	else
	{
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
	}

	return 0;
}