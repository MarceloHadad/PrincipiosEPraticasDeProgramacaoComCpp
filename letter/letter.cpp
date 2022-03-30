#include "std_lib_facilities.h"

int main()
{
	string primeiro_nome;
	string nome_amigo;
	char sexo_amigo = 0;
	int idade = 0;

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

	cout << "Digite a idade do destinatário:\n";
	cin >> idade;
	
	cout << "Soube que você fez aniversário há pouco e agora tem " << idade << " anos.\n";

	if (idade <= 0 || idade > 110)
	{
		simple_error("Você está brincando!\n");
	}

	else if (idade < 12)
	{
		cout << "No próximo ano você terá " << idade + 1 << ".\n";
	}

	else if (idade == 17)
	{
		cout << "No próximo ano você poderá votar.\n";
	}

	else if (idade > 70)
	{
		cout << "Espero que esteja aproveitando a aposentadoria.";
	}

	cout << "Atenciosamente\n\n\n";
	cout << "Marcelo Hadad";
}