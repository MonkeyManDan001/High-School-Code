//Calculator Dan Mine

#include <iostream>
using namespace std;
//----------------------------------------------------
double Sum(double num1, double num2)
{
	return num1 + num2;
}
//----------------------------------------------------
double Product(double num1, double num2)
{
	return num1 * num2;
}
//----------------------------------------------------
double Divide(double num1, double num2)
{
	return num1 / num2;
}
//----------------------------------------------------
int main()
{
	double num1, num2, sum, product, quotient;
	cout << "Please enter the first number: ";
	cin >> num1;
	cout << "Please enter the second number: ";
	cin >> num2;
	sum = Sum(num1, num2);
	product = Product(num1, num2);
	quotient = Divide(num1, num2);
	cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;
	cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;
	cout << "The quotient of " << num1 << " and " << num2 << " is " << quotient;
	return 0;
}
