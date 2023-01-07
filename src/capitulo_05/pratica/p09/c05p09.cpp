#include "std_lib_facilities.h"

int main()
try
{
	// string s = "macaco"; boo c = "bobo"<s; if (c) cout <<"Success!\n";
	string s = "macaco"; bool c = "bobo" < s; if (c) cout << "Success!\n";
	keep_window_open();
	return 0;
}
catch (exception& e)
{
	cerr << "error:" << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...)
{
	cerr << "Ops: unknown exception!\n";
	keep_window_open();
	return 2;
}