#include "std_lib_facilities.h"

int main()
{
	double num = 0;
	double mInCm = 100;
	double polInCm = 2.54;
	double feetInPol = 12;
	double result = 0;

	// Mantenha registro da soma dos valores lidos.
	vector<double> nums;
	// Note que para manter registro da soma, você tem que decidir sobre que unidade usar para essa soma. Use metros.
	double resultInMeter = 0;

	double sum = 0;
	double greater = 0;
	double minor = 0;
	string resultMeasureUnit = "";
	string measureUnit = "";

	cout << "Type a number followed by the measure unit:\n";

	while (cin >> num >> measureUnit)
	{
		if (measureUnit == "cm")
		{
			result = num / mInCm;
			resultMeasureUnit = "m";

			resultInMeter = result;
		}

		else if (measureUnit == "m")
		{
			result = num * mInCm;
			resultMeasureUnit = "cm";

			resultInMeter = num;
		}

		else if (measureUnit == "pol")
		{
			result = num * polInCm;
			resultMeasureUnit = "cm";

			resultInMeter = result / mInCm;
		}

		else if (measureUnit == "ft")
		{
			result = num * feetInPol;
			resultMeasureUnit = "pol";

			resultInMeter = (result * polInCm) / mInCm;
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

		// Mantenha todos os valores lidos (convertidos para metros) em um vector. 
		nums.push_back(resultInMeter);
	}

	// Antes de escrever os valores de vector, ordene-os (isto vai fazer que eles sejam mostrados em ordem crescente).
	sort(nums);

	// Ao final, escreva esses valores.
	cout << "The typed numbers (in Meters) was ";
	for (int i = 0; i < nums.size(); i++)
	{
		sum += nums[i];

		if (i == nums.size() - 1)
		{
			cout << nums[i] << endl;
		}

		else
		{
			cout << nums[i] << ", ";
		}
	}

	greater = nums.back();
	minor = nums.front();

	// Quando o laço terminar, escreva o menor, o maior, o número de valores e a soma dos valores.
	cout << "The greater number (in Meters) is " << greater << endl;
	cout << "The minor number (in Meters) is " << minor << endl;
	cout << "There was typed " << nums.size() << " numbers" << endl;
	cout << "The sum (in Meters) is " << sum << endl;

	return 0;
}