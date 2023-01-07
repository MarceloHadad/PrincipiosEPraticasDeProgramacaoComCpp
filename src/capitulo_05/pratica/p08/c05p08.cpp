#include "std_lib_facilities.h"

int main()
try
{
	// bool c = false; if (c) cout <<"Success!\n"; else cout << "Failure!\n";
	bool c = true; if (c) cout << "Success!\n"; else cout << "Failure!\n";
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