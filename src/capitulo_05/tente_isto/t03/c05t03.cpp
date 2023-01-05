#include "std_lib_facilities.h"

// Insira mais testes até que todos os erros sejam capturados.
// Como você sabe que capturou todos os erros?
// Esta não é uma pergunta maliciosa; neste exemplo, em particular, você pode dar uma explicação válida para ter capturado todos os erros.
int area(int length, int width)
{
	if (length <= 0 || width <= 0) error("Cannot calculate area if one of the arguments is less or equals zero.");

	return length * width;
}

int picture_area(int x, int y)
{
	const int frame_width = 2;
	if ((x > 0 && x <= frame_width) || (y > 0 && y <= frame_width)) error("Cannot calculate the area of a picture with a frame width bigger or equals to the picture.");

	return area(x - frame_width, y - frame_width);
}

// Teste o programa anterior com diversos valores.
int main()
{
	int x = 4;
	int y = 4;
	int z = 4;

	try
	{
		int area1 = area(x, y);
		int area2 = picture_area(x, z);
		int area3 = picture_area(y, z);
		double ratio = double(area1) / area3;

		// Imprima os valores de area1, area2, area3 e razão.
		cout << "area1: " << area1 << endl;
		cout << "area2: " << area2 << endl;
		cout << "area3: " << area3 << endl;
		cout << "ratio: " << ratio << endl;
	}

	catch (exception& e)
	{
		cerr << "[error] " << e.what() << endl;
		return 1;
	}


	return 0;
}