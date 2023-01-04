#include "std_lib_facilities.h"

int main()
{
	const double diff = 10000000.0 / 100;

	double n1 = 0;
	double n2 = 0;
	double greater = 0;
	double minor = 0;
	double numDiff = 0;

	cout << "Type two numbers:\n";

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

		numDiff = greater - minor;

		if (numDiff < diff)
		{
			cout << "The numbers are almost equals." << endl;
		}
	}

	return 0;
}