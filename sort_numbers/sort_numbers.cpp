#include "std_lib_facilities.h"

int main()
{
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int aux = 0;
	bool sorted = false;

	cout << "Type three numbers to sort:\n";
	cin >> n1 >> n2 >> n3;

	while (!sorted)
	{
		if (n3 < n2)
		{
			aux = n2;
			n2 = n3;
			n3 = aux;
		}

		if (n2 < n1)
		{
			aux = n1;
			n1 = n2;
			n2 = aux;
		}

		if (n1 <= n2 && n2 <= n3)
		{
			sorted = true;
		}
	}

	cout << n1 << " ," << n2 << " ," << n3;
}