#include "std_lib_facilities.h"

int main()
{
	int n1 = 0;
	int n2 = 0;

	std::cout << "Type two integer numbers:\n";

	while (cin >> n1 >> n2)
	{
		cout << n1 << " " << n2 << endl;
	}

	return 0;
}