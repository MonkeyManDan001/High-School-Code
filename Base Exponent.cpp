//Base Exponent Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int base;
	int exponent;
	int answer = 1;

	cout << "Please enter the base: ";
	cin >> base;

	cout << "Please enter the exponent: ";
	cin >> exponent;

	do
	{
		answer *= base;
		exponent = exponent - 1;
	}while (exponent>0);

	cout << "The answer is " << answer;

	return 0;
}
