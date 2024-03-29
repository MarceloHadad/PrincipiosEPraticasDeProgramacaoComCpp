#include "std_lib_facilities.h"

int main()
try
{
	// int i=0; while (i<10) ++j. if (j<i) cout << "Success!\n";
	int i = 0; while (i < 10) ++i; if (1 < i) cout << "Success!\n";
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