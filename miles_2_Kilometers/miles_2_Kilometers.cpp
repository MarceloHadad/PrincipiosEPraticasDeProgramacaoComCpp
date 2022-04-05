#include "std_lib_facilities.h"

int main()
{
	double miles = 0;
	double kilometers = 0;
	double oneMileInKilometer = 1.609;

	cout << "Type the amount of miles to convert to kilometers:\n";
	cin >> miles;

	kilometers = miles * oneMileInKilometer;

	cout << miles << " miles is equivalent to " << kilometers << " kilometers.";
}