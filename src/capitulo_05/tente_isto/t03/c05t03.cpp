#include "std_lib_facilities.h"

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