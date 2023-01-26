#include "std_lib_facilities.h"

void decomposesNumber(string);
string returnsUnitsSentence(string);
string returnTensSentence(string);
string returnHundredsSentence(string);
string returnThousandsSentence(string);
int getInt(string, int);

// Escreva um programa que leia dígitos e componha números inteiros.
// Por exemplo, 123 é lido como os caracteres 1, 2 e 3.
int main()
{
	string n = "";

	cout << "Type a number: \n";
	cin >> n;

	decomposesNumber(n);

	return 0;
}

// O programa deve ter fornecido como saída "123 é 1 cento e 2 dezenas e 3 unidades".
// O número deve ser escrito como um valor int.
void decomposesNumber(string n)
 {
	switch (n.size())
	{
	case 1:
		cout << n << " is " << returnsUnitsSentence(n) << ".";
		break;
	case 2:
		cout << n << " is " << returnTensSentence(n) << " and " << returnsUnitsSentence(n) << ".";
		break;
	case 3:
		cout << n << " is " << returnHundredsSentence(n) << " and " << returnTensSentence(n) << " and " << returnsUnitsSentence(n) << ".";
		break;
	case 4:
		cout << n << " is " << returnThousandsSentence(n) << " and " << returnHundredsSentence(n) << " and " << returnTensSentence(n) << " and " << returnsUnitsSentence(n) << ".";
		break;
	default:
		cout << "Cannot decompose the number " << n;
		break;
	}
}

// Trate com números de um, dois, três e quatro dígitos.
string returnsUnitsSentence(string fullNumber)
{
	int nAsInt = getInt(fullNumber, fullNumber.size() - 1);
	string nAsStr = to_string(nAsInt);

	if (nAsInt > 1) return nAsStr + " units";
	return nAsStr + " unit";
}

string returnTensSentence(string fullNumber)
{
	int nAsInt = getInt(fullNumber, fullNumber.size() - 2);
	string nAsStr = to_string(nAsInt);

	if (nAsInt > 1) return nAsStr + " tens";
	return nAsStr + " ten";
}

string returnHundredsSentence(string fullNumber)
{
	int nAsInt = getInt(fullNumber, fullNumber.size() - 3);
	string nAsStr = to_string(nAsInt);

	if (nAsInt > 1) return nAsStr + " hundreds";
	return nAsStr + " hundred";
}

string returnThousandsSentence(string fullNumber)
{
	int nAsInt = getInt(fullNumber, fullNumber.size() - 4);
	string nAsStr = to_string(nAsInt);

	if (nAsInt > 1) return nAsStr + " thousands";
	return nAsStr + " thousand";
}

// Dica: para obter o valor inteiro 5 a partir do caracter '5' subtraia '0', isto é, '5'-'0'==5.
int getInt(string fullN, int pos)
{
	return 	fullN[pos] - '0';
}