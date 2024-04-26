//Ascending Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	int num3;
	int num4;

	cout << "Please enter a number: ";
	cin >> num1;
	cout << "Please enter a number: ";
	cin >> num2;
	cout << "Please enter a number: ";
	cin >> num3;
	cout << "Please enter a number: ";
	cin >> num4;

	if (num1 < num2 && num1 < num3 && num1 < num4)
		cout << num1;
	else if (num2 < num1 && num2 < num3 && num2 < num4)
		cout << num2;
	else if (num3 < num1 && num3 < num2 && num3 < num4)
		cout << num3;
	else if (num4 < num1 && num4 < num2 && num4 < num3)
		cout << num4;

	if (num2 < num1 && num2 < num3 && num2 > num4)
		cout << num2;
	else if (num2 < num1 && num2 < num4 && num2 > num3)
		cout << num2;
	else if (num2 < num3 && num2 < num1 && num2 > num4)
		cout << num2;
	else if (num2 < num3 && num2 < num4 && num2 > num1)
		cout << num2;
	else if (num2 < num4 && num2 < num1 && num2 > num3)
		cout << num2;
	else if (num2 < num4 && num2 < num3 && num2 > num1)
		cout << num2;

	if (num3 < num1 && num3 > num2 && num3 > num4)
		cout << num3;
	else if (num3 < num1 && num3 > num4 && num3 > num2)
		cout << num3;
	else if (num3 < num2 && num3 > num1 && num3 > num4)
		cout << num3;
	else if (num3 < num2 && num3 > num4 && num3 > num1)
		cout << num3;
	else if (num3 < num4 && num3 > num1 && num3 > num2)
		cout << num3;
	else if (num3 > num4 && num3 > num2 && num3 > num1)
		cout << num3;

	if (num4 > num1 && num4 > num2 && num4 > num3)
		cout << num4;
	else if (num4 > num1 && num4 > num3 && num4 > num2)
		cout << num4;
	else if (num4 > num2 && num4 > num1 && num4 > num3)
		cout << num4;
	else if (num4 > num2 && num4 > num3 && num4 > num1)
		cout << num4;
	else if (num4 > num3 && num4 > num1 && num4 > num2)
		cout << num4;
	else if (num4 > num3 && num4 > num2 && num4 > num1)
		cout << num4;

	return 0;
}
