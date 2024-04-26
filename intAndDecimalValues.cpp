//intAndDecimalValues Dan Mine

#include <iostream>
using namespace std;
int main()
{
	double num1;

	cout << "Enter a double number: ";
	cin >> num1;
	cout << endl;

	cout << "The int value is: " << static_cast<int>(num1) << endl;
	cout << "The decimal value is: " << num1-static_cast<int>(num1);

	return 0;
}
