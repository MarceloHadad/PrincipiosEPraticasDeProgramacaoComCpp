#include "std_lib_facilities.h"

int main()
{
	string primeiro_nome;
	string nome_amigo;
	char sexo_amigo = 0;

	cout << "Digite o nome da pessoa para quem deseja escrever:\n";	
	cin >> primeiro_nome;

	cout << "Prezado(a) " << primeiro_nome << ",\n";
	cout << "Como você vai? Eu estou bem.\n";
	cout << "Sinto sua falta. Já faz muito tempo que não nos falamos.\n";

	cout << "Digite o nome de outro amigo:\n";
	cin >> nome_amigo;

	cout << "Você viu " << nome_amigo << " recentemente?\n";
	
	cout << "Digite 'm' se o seu amigo for do sexo masculino e 'f' se for do sexo feminino:\n";
	cin >> sexo_amigo;

	if (sexo_amigo == 'm')
	{
		cout << "Se você encontrar o " << nome_amigo << " por favor peça a ele para me telefonar.\n";
	}
	else if (sexo_amigo == 'f')
	{
		cout << "Se você encontrar a " << nome_amigo << " por favor peça a ela para me telefonar.\n";
	}
}