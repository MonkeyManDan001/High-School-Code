//Rectangle Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int length;
	int width;

	cout << "Please enter the length: ";
	cin >> length;

	if (length <= 0)
	{
		cout << "Length needs to be positive.";
	}
	else
	{
		cout << "Please enter the width: ";
		cin >> width;

		if (width <= 0)
		{
			cout << "Width needs to be positive.";
		}
		else
		{
			cout << "Area: " << length*width;
		}
	}

	return 0;
}
