#include "std_lib_facilities.h"

// Na seção “prática”, você escreveu um programa que, dada uma série de números, encontra o mínimo e o máximo desta série.
// O número que aparece mais vezes em uma sequência é chamado de modo.
// Crie um programa que encontre o modo de um conjunto de inteiros positivos.
int main()
{
	int timesMostTypedNumber = 0;
	int num = 0;
	vector<int> nums;
	vector<int> mostTypedNums;

	cout << "Type a few numbers: " << endl;

	while (cin >> num)
	{
		nums.push_back(num);
	}

	sort(nums);

	for (int i = 0; i < nums.size(); i++)
	{
		if (i > 0 && nums[i] == nums[i-1])
		{
			continue;
		}

		int currentCount = count(nums.begin(), nums.end(), nums[i]);

		if (currentCount >= timesMostTypedNumber)
		{
			mostTypedNums.push_back(nums[i]);
			timesMostTypedNumber = currentCount;
		}
	}

	cout << "There was typed " << nums.size() << " numbers" << endl;

	if (mostTypedNums.size() > 1)
	{
		cout << "The most typed numbers was:" << endl;
		for (int i = 0; i < mostTypedNums.size(); i++)
		{
			cout << mostTypedNums[i] << endl;
		}

		return 0;
	}

	cout << "The most typed number was " << mostTypedNums[0] << endl;

	return 0;
}