//GreaterNumber Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;

	cout << "Please enter 1st number: ";
	cin >> num1;

	cout << "Please enter 2nd number: ";
	cin >> num2;

	if (num1 > num2)
		cout << "The greater number is " << num1;
	else
		cout << "The greater number is " << num2;

	return 0;
}
