#include "std_lib_facilities.h"

int main()
{
	// Leia partes de (dia da semana, valor) da entrada padrão. Por exemplo:
	// Terça 23 Quinta 56 Terça -3 Quinta 99
	string day = "";
	int n = 0;
	int monSum = 0;
	int tueSum = 0;
	int wedSum = 0;
	int thuSum = 0;
	int friSum = 0;
	int satSum = 0;
	int sunSum = 0;
	int rejectedDays = 0;
	// Armazene todos os valores para cada dia da semana em um **vector\<int\>**.
	vector<int> mon;
	vector<int> tue;
	vector<int> wed;
	vector<int> thu;
	vector<int> fri;
	vector<int> sat;
	vector<int> sun;

	while (cin >> day >> n)
	{
		transform(day.begin(), day.end(), day.begin(), tolower);

		// Ignore dias da semana inválidos, tais como **Cesta**, mas aceite valores comuns como sinônimos, tais como **Qui** e **quinta**.
		if (day == "monday" || day == "mon")
		{
			mon.push_back(n);
		}
		else if (day == "tuesday" || day == "tue")
		{
			tue.push_back(n);
		}
		else if (day == "wednesday" || day == "wed")
		{
			wed.push_back(n);
		}
		else if (day == "thursday" || day == "thu")
		{
			thu.push_back(n);
		}
		else if (day == "friday" || day == "fri")
		{
			fri.push_back(n);
		}
		else if (day == "saturday" || day == "sat")
		{
			sat.push_back(n);
		}
		else if (day == "sunday" || day == "sun")
		{
			sun.push_back(n);
		}
		else
		{
			rejectedDays++;
			continue;
		}
	}

	// Imprima os valores dos **vectors** dos sete dias da semana.
	cout << "Monday:";
	for (int i = 0; i < mon.size(); i++)
	{
		cout << " " << mon[i];
		monSum += mon[i];
	}

	cout << endl << "Tuesday: ";
	for (int i = 0; i < tue.size(); i++)
	{
		cout << " " << tue[i];
		tueSum += tue[i];
	}

	cout << endl << "Wednesday: ";
	for (int i = 0; i < wed.size(); i++)
	{
		cout << " " << wed[i];
		wedSum += wed[i];
	}

	cout << endl << "Thursday: ";
	for (int i = 0; i < thu.size(); i++)
	{
		cout << " " << thu[i];
		thuSum += thu[i];
	}

	cout << endl << "Friday: ";
	for (int i = 0; i < fri.size(); i++)
	{
		cout << " " << fri[i];
		friSum += fri[i];
	}

	cout << endl << "Saturday: ";
	for (int i = 0; i < sat.size(); i++)
	{
		cout << " " << sat[i];
		satSum += sat[i];
	}

	cout << endl << "Sunday: ";
	for (int i = 0; i < sun.size(); i++)
	{
		cout << " " << sun[i];
		sunSum += sun[i];
	}

	cout << endl;

	// Imprima as somas dos valores de cada **vector**.
	cout << "Sum: " << endl
		<< "Monday: " << monSum << endl
		<< "Tuesday: " << tueSum << endl
		<< "Wednesday: " << wedSum << endl
		<< "Thursday: " << thuSum << endl
		<< "Friday: " << friSum << endl
		<< "Saturday" << satSum << endl
		<< "Sunday: " << sunSum << endl;

	cout << endl;

	// Imprima o número de valores rejeitados.
	cout << "Rejected: " << rejectedDays << endl;

	return 0;
}