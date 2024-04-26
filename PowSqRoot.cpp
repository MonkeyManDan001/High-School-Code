//PowSqRoot Dan Mine

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int base, exponent;

	cout << "Please enter a base: ";
	cin >> base;
	cout << "Please enter an exponent: ";
	cin >> exponent;

	cout << endl << base << " ^ " << exponent << " = " << pow(base, exponent) << endl;
	cout << "The squareroot of " << pow(base, exponent) << " is " << sqrt(pow(base, exponent));

	return 0;
}
