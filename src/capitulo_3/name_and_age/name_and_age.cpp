#include "std_lib_facilities.h"

int main()
{
	cout << "Por favor informe seu primeiro nome e sua idade\n";

	string primeiro_nome = "???"; //variável string ("???" significa "não sei o nome")
	double idade = -1; //variável inteira (-1 significa "não sei a idade)

	cin >> primeiro_nome >> idade;

	int idadeEmAnos = (int)idade;
	int idadeEmMeses = (ceil((idade - idadeEmAnos) * 100.0) / 100.0) * 10;

	if (idadeEmMeses > 0)
	{
		cout << "Oi, " << primeiro_nome << " (idade: " << idadeEmAnos << " anos e " << idadeEmMeses << " meses)\n";
	}

	else
	{
		cout << "Oi, " << primeiro_nome << " (idade: " << idadeEmAnos << " anos)\n";
	}

	return 0;
}