//whileRef Dan Mine

#include <iostream>
using namespace std;
int main()
{

	int number;
	cout << "Enter a positive number: ";
	cin >> number;
	while (number <= 0)
	{
		cout << "Number  must be positive." << endl;
		cout << "Enter a positive number: ";
		cin >> number;
	}
	cout << "The value of number is: " << number;
	return 0;
}
