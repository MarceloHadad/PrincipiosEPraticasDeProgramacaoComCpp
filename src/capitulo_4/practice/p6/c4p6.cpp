#include "std_lib_facilities.h"

int main()
{
	double n1 = 0;
	double n2 = 0;
	double greater = 0;
	double minor = 0;
	vector<double> nums;

	cout << "Type two numbers:\n";

	while (cin >> n1)
	{
		nums.push_back(n1);
		sort(nums);
		greater = nums.back();
		minor = nums.front();

		cout << "Typed number: " << n1 << endl;

		if (n1 == greater)
		{
			cout << "The greater untill now." << endl;
		}

		if (n1 == minor)
		{
			cout << "The minor untill now." << endl;
		}
	}

	return 0;
}