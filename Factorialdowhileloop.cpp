//Factorialdowhileloop Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2 = 1;

	cout << "Please enter a number: ";
	cin >> num1;

	do
		{
			num2 *= num1;
			num1 = num1 - 1;
		} while (num1 >= 2);

		cout << "The answer is: " << num2;

	return 0;
}
