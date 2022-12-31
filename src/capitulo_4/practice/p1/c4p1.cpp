#include "std_lib_facilities.h"

int main()
{
	vector<int> nums(2);
	int temp = 0;
	int control = 0;

	std::cout << "Type two integer numbers:\n";

	while (std::cin >> temp)
	{
		nums[control] = temp;
		control++;
	}

	for (int i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << std::endl;
	}

	return 0;
}