#include "std_lib_facilities.h"

int main()
{
	cout << "Digite o nome da pessoa para quem deseja escrever:\n";
	string primeiro_nome;
	cin >> primeiro_nome;
	cout << "Prezado(a) " << primeiro_nome << ",\n";
	cout << "Como você vai? Eu estou bem.\n";
	cout << "Sinto sua falta. Já faz muito tempo que não nos falamos.\n";
	cout << "Digite o nome de outro amigo:\n";
	string nome_amigo;
	cin >> nome_amigo;
	cout << "Você viu " << nome_amigo << " recentemente?\n";
}