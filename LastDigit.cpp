//LastDigit Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int num1;

	cout << "Enter an integer: ";
	cin >> num1;

	if (num1%10 == 0)
		cout << "The last digit is a 0.";
	else
		cout << "The last digit is not a 0.";

	return 0;
}
