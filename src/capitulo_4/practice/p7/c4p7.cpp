#include "std_lib_facilities.h"

int main()
{
	double num = 0;
	double mInCm = 100;
	double polInCm = 2.54;
	double feetInPol = 12;
	double result = 0;
	string resultMeasureUnit = "";
	string measureUnit = "";

	cout << "Type a number followed by the measure unity:\n";

	while (cin >> num >> measureUnit)
	{
		if (measureUnit == "cm")
		{
			result = num / mInCm;
			resultMeasureUnit = "m";
		}

		else if (measureUnit == "m")
		{
			result = num * mInCm;
			resultMeasureUnit = "cm";
		}

		else if (measureUnit == "pol")
		{
			result = num * polInCm;
			resultMeasureUnit = "cm";
		}

		else if (measureUnit == "ft")
		{
			result = num * feetInPol;
			resultMeasureUnit = "pol";
		}

		else
		{
			cout << "The measure unit '" << measureUnit << "' is unknown" << endl;
			continue;
		}

		if (num <= 1)
		{
			cout << num << measureUnit << " is equals to " << result << resultMeasureUnit << endl;
		}

		else
		{
			cout << num << measureUnit << " are equals to " << result << resultMeasureUnit << endl;
		}		
	}

	return 0;
}