#include "std_lib_facilities.h"

int main()
{
	vector<int> nums;
	int n1 = 0;
	int n2 = 0;

	cout << "Type two integer numbers:\n";

	while (cin >> n1 >> n2)
	{
		nums.push_back(n1);
		nums.push_back(n2);
	}

	int greater = nums[0];
	int minor = greater;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] > greater)
		{
			greater = nums[i];
		}

		if (nums[i] < minor)
		{
			minor = nums[i];
		}
	}

	cout << "The greater number is: " << greater << endl;
	cout << "The minor number is: " << minor << endl;

	return 0;
}