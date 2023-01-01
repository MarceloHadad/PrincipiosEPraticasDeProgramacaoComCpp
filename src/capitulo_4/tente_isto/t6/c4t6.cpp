#include "std_lib_facilities.h"

int main()
{
	string temp = "";
	vector<string> curseWords{ "brocoli", "cenoura", "batata", "beterraba"};
	
	cout << "Type something: " << endl;

	while (cin >> temp)
	{
		bool isCursing = false;

		for (int i = 0; i < curseWords.size(); i++)
		{
			if (curseWords[i] == temp)
			{
				isCursing = true;
			}
		}

		if (isCursing)
		{
			cout << "NOISE" << endl;
		}

		else
		{
			cout << temp << endl;
		}
	}

	return 0;
}