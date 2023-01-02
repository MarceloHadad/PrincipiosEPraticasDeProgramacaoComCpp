#include "std_lib_facilities.h"

int main()
{
	int n1 = 0;
	int n2 = 0;
	int greater = 0;
	int minor = 0;

	cout << "Type two integer numbers:\n";

	while (cin >> n1 >> n2)
	{
		if (n1 > n2)
		{
			greater = n1;
			minor = n2;
		}

		else if (n1 < n2)
		{
			greater = n2;
			minor = n1;
		}

		else
		{
			cout << "The numbers are equals." << endl;
			continue;
		}

		cout << "The greater number is: " << greater << endl;
		cout << "The minor number is: " << minor << endl;
	}

	return 0;
}