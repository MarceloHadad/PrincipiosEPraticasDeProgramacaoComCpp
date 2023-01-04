#include "std_lib_facilities.h"

int main()
{
	string s1 = "";
	string s2 = "";
	string s3 = "";
	string aux = "";
	bool sorted = false;

	cout << "Type three strings to sort:\n";
	cin >> s1 >> s2 >> s3;

	while (!sorted)
	{
		if (s3 < s2)
		{
			aux = s2;
			s2 = s3;
			s3 = aux;
		}

		if (s2 < s1)
		{
			aux = s1;
			s1 = s2;
			s2 = aux;
		}

		if (s1 <= s2 && s2 <= s3)
		{
			sorted = true;
		}
	}

	cout << s1 << " ," << s2 << " ," << s3;
}