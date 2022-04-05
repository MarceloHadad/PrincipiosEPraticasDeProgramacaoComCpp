#include "std_lib_facilities.h"

int main()
{
	int val1 = 0;
	int val2 = 0;
	int lowestVal = 0;
	int highestVal = 0;
	int sumVal = 0;
	int diffVal = 0;
	double avgVal = 0;

	cout << "Type two numbers:\n";
	cin >> val1 >> val2;

	if (val1 > val2)
	{
		highestVal = val1;
		lowestVal = val2;
	}

	else
	{
		highestVal = val2;
		lowestVal = val1;
	}

	sumVal = val1 + val2;

	diffVal = highestVal - lowestVal;

	avgVal = sumVal / 2;

	cout << "Lowest value: " << lowestVal << endl;
	cout << "Highest value: " << highestVal << endl;
	cout << "Sum value: " << sumVal << endl;
	cout << "Difference value: " << diffVal << endl;
	cout << "Average value: " << avgVal << endl;


}