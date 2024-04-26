//NumberSquared Dan Mine

#include <iostream>
using namespace std;
int main()
{
	double num;
	cout << "Please enter a number: ";
	cin >> num;

	double numSquared = num*num;

	if (numSquared > num)
		cout << numSquared << " is greater than " << num << ".";
	else if (numSquared < num)
		cout << numSquared << " is less than " << num << ".";
	else
		cout << numSquared << " is equal to " << num << ".";

	return 0;
}
