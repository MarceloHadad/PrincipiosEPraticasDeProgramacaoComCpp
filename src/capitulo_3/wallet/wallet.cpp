#include "std_lib_facilities.h"

int main()
{
	int pennies = 0;
	int nickels = 0;
	int dimes = 0;
	int quarter = 0;
	int halfDollar = 0;
	int dollar = 0;
	int totalInPennies = 0;
	int totalPennies = 0;
	int totalDollars = 0;

	cout << "How much pennies do you have?\n";
	cin >> pennies;
	totalInPennies = pennies;

	while (pennies > 5)
	{
		if (pennies >= 100)
		{
			dollar++;
			pennies -= 100;
		}
		
		else if (pennies >= 50)
		{
			halfDollar++;
			pennies -= 50;
		}

		else if (pennies >= 25)
		{
			quarter++;
			pennies -= 25;
		}

		else if (pennies >= 10)
		{
			dimes++;
			pennies -= 10;
		}

		else if (pennies >= 5)
		{
			nickels++;
			pennies -= 5;
		}
	}

	if (pennies > 0)
	{
		if (pennies == 1)
		{
			cout << "You have " << pennies << " penny.\n";
		}

		else
		{
			cout << "You have " << pennies << " pennies.\n";
		}
	}

	if (nickels > 0)
	{
		if (nickels == 1)
		{
			cout << "You have " << nickels << " nickel.\n";
		}

		else
		{
			cout << "You have " << nickels << " nickels.\n";
		}
	}

	if (dimes > 0)
	{
		if (dimes == 1)
		{
			cout << "You have " << dimes << " dime.\n";
		}

		else
		{
			cout << "You have " << dimes << " dimes.\n";
		}
	}

	if (quarter > 0)
	{
		cout << "You have " << quarter << " quarter.\n";
	}

	if (halfDollar > 0)
	{
		cout << "You have " << halfDollar << " half dollar.\n";
	}

	if (dollar > 0)
	{
		cout << "You have " << dollar << " dollars.\n";
	}

	totalDollars = dollar;
	totalPennies = totalInPennies - (totalDollars * 100);

	cout << "The total value of your coins is " << totalInPennies << " pennies.\n";
	cout << "The total value is U$ " << totalDollars << "," << totalPennies << ".\n";
}