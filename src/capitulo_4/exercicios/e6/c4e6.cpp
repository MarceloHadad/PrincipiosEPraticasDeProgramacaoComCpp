#include "std_lib_facilities.h"

int main()
{
	int n = 0;
	int nameToN = 0;
	string nName = "";
	string nToName = "";

	// Faça um vector armazenar dez valores string: “zero”, “um”,...”nove”.
	vector<string> nums = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	cout << "Type a number followed by a number name: " << endl;
	cin >> n >> nName;
	
	// Use este em um programa que converta um dígito para sua representação alfabética correspondente.
	// Por exemplo, a digitação de 7 produz a saída sete.
	nToName = nums[n];

	// Faça com que o mesmo programa, usando o mesmo laço de entrada, converta a representação alfabética para a representação na forma de dígito.
	// Por exemplo, a digitação de sete produza a saída de 7.
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] == nName)
		{
			nameToN = i;
		}
	}

	cout << nToName << " " << nameToN << endl;

	return 0;
}