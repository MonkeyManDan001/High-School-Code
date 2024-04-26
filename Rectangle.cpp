//Rectangle Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int length;
	int width;


	cout << "Please enter length: ";
	cin >> length;

	cout << "Please enter width: ";
	cin >> width;
	cout << endl;

	cout << "The area is " << length*width << " and the perimeter is " << (length*2)+(width*2);

	return 0;
}
