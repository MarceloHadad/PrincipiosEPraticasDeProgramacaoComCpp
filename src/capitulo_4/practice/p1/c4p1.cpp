#include "std_lib_facilities.h"

int main()
{
	vector<int> nums;
	int n1 = 0;
	int n2 = 0;

	std::cout << "Type two integer numbers:\n";

	while (cin >> n1 >> n2)
	{
		nums.push_back(n1);
		nums.push_back(n2);
	}

	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << endl;
	}

	return 0;
}