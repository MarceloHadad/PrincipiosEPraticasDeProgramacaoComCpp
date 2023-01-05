#include "std_lib_facilities.h"

// Para ver com que se parece uma exceção não capturada, execute um pequeno programa que use error() sem capturar quaisquer exceções.
int main()
{
	int input = 0;

	cout << "To trigger an exception, type a number bigger than nine: " << endl;
	cin >> input;

	if (input > 9) error("Number bigger than nine!");

	return 0;
}