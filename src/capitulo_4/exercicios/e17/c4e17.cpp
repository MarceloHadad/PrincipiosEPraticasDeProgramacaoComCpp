#include "std_lib_facilities.h"

bool checkStringLength(const string oneThing, const string anotherThing)
{
	return oneThing.length() > anotherThing.length();
}

// Escreva um programa que encontre o mínimo, o máximo e o modo de uma sequência de strings.
int main()
{
	int timesMostTypedString = 0;
	int longestStringSize = 0;
	int shortestStringSize = 0;
	bool continueToType = true;
	string input = "";
	vector<string> inputs;
	vector<string> longestStrings;
	vector<string> shortestStrings;
	vector<string> mostTypedStrings;

	cout << "Info: When done, type '|'." << endl;

	while (continueToType)
	{
		cout << "Type something: " << endl;

		cin >> input;

		if (input == "|")
		{
			continueToType = false;
			break;
		}

		inputs.push_back(input);
	}

	sort(inputs);
	sort(inputs.begin(),inputs.end(), checkStringLength);

	longestStrings.push_back(inputs.front());
	longestStringSize = longestStrings[0].length();
	shortestStrings.push_back(inputs.back());
	shortestStringSize = shortestStrings[0].length();

	for (int i = 0; i < inputs.size(); i++)
	{
		string currentInput = inputs[i];
		int currentInputSize = currentInput.length();
		int currentCount = count(inputs.begin(), inputs.end(), currentInput);

		if (i > 0 && currentInput == inputs[i - 1])
		{
			continue;
		}

		if (currentInputSize == longestStringSize)
		{
			auto stringPosition = find(longestStrings.begin(), longestStrings.end(), currentInput);
			if (stringPosition >= longestStrings.end())
			{
				longestStrings.push_back(currentInput);
			}
		}

		if (currentInputSize == shortestStringSize)
		{
			auto stringPosition = find(shortestStrings.begin(), shortestStrings.end(), currentInput);
			if (stringPosition >= shortestStrings.end())
			{
				shortestStrings.push_back(currentInput);
			}
		}

		if (currentCount >= timesMostTypedString)
		{
			mostTypedStrings.push_back(currentInput);
			timesMostTypedString = currentCount;
		}
	}

	cout << endl;

	if (mostTypedStrings.size() > 1)
	{
		cout << "The most typed strings were:" << endl;
		for (int i = 0; i < mostTypedStrings.size(); i++)
		{
			cout << mostTypedStrings[i] << endl;
		}
	}

	else
	{
		cout << "The most typed string was " << mostTypedStrings[0] << endl;
	}

	if (longestStrings.size() > 1)
	{
		cout << "The longest strings typed were:" << endl;
		for (int i = 0; i < longestStrings.size(); i++)
		{
			cout << longestStrings[i] << endl;
		}
	}

	else
	{
		cout << "The longest string typed was " << longestStrings[0] << endl;
	}

	if (shortestStrings.size() > 1)
	{
		cout << "The shortest strings typed were:" << endl;
		for (int i = 0; i < shortestStrings.size(); i++)
		{
			cout << shortestStrings[i] << endl;
		}
	}

	else
	{
		cout << "The shortest string typed was " << shortestStrings[0] << endl;
	}

	return 0;
}