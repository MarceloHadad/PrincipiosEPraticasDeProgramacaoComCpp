#include "std_lib_facilities.h"

int main()
{
	string input1 = "";
	string input2 = "";
	int n1 = 0;
	int n2 = 0;
	int result = 0;
	char typedOperator = ' ';
	bool n1Seted = false;
	bool n2Seted = false;
	vector<string> nums = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	// Modifique a “mini calculadora” do exercício 5 para aceitar (apenas) números de um dígito, sejam eles escritos na forma de dígitos ou alfabética.
	cout << "Type two numbers, or number names (with one digit only) and the operation that you want to do: " << endl;
	cin >> input1 >> input2 >> typedOperator;

	if (isdigit(input1[0]))
	{
		n1 = stoi(input1);
		n1Seted = true;
	}

	if (isdigit(input2[0]))
	{
		n2 = stoi(input2);
		n2Seted = true;
	}

	if (!n1Seted || !n2Seted)
	{
		for (int i = 0; i < nums.size(); i++)
		{
			if (!n1Seted && nums[i] == input1)
			{
				n1 = i;
				n1Seted = true;

			}

			if (!n2Seted && nums[i] == input2)
			{
				n2 = i;
				n2Seted = true;
			}

			if (n1Seted && n2Seted)
			{
				break;
			}
		}
	}

	switch (typedOperator)
	{
	case '+':
		result = n1 + n2;
		cout << "The sum of " << n1 << " and " << n2 << " is " << result;
		break;
	case '-':
		result = n1 - n2;
		cout << "The subtraction of " << n1 << " and " << n2 << " is " << result;
		break;
	case '*':
		result = n1 * n2;
		cout << "The multiplication of " << n1 << " by " << n2 << " is " << result;
		break;
	case '/':

		if (n2 == 0)
		{
			cout << "Cannot divide by zero" << endl;
			break;
		}

		else
		{
			result = n1 / n2;
		}

		cout << "The division of " << n1 << " by " << n2 << " is " << result;
		break;
	default:
		cout << "Unknown operator. Expected: '+', '-', '*' or '/'. Received: '" << typedOperator << "'." << endl;
		break;
	}

	return 0;
}