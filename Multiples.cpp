//Multiples Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;

	cout << "Please enter the 1st integer: ";
	cin >> num1;

	cout << "Please enter the 2nd integer: ";
	cin >> num2;

	if (num1%num2 == 0)
		cout << num1 << " is a multiple of " << num2;
	else
		cout << num1 << " is NOT a multiple of " << num2;

	return 0;
}
