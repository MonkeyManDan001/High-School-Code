//RectangleV2 Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int length = 3;
	int width = 5;
	int area = length*width;
	int perimeter = length+length+width+width;
	cout << "The area of a rectangle with length = " << length << " and width = " << width << " is " << area << ".\n";
	cout << "The perimeter of a rectangle with length = " << length << " and width = " << width << " is " << perimeter << ".";

	return 0;
}
