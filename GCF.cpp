//GCF Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	int ans1;
	int ans2;

	cout << "Enter an integer: ";
	cin >> num1;
	cout << "Enter an integer: ";
	cin >> num2;

	int div = num1;

	while (ans1 != ans2)
	{
		ans1 = num1 % div;
		ans2 = num2 % div;
		if (ans1 != ans2)
			div--;
		else if (num1 / div != 0 || num2 / div != 0)
			div--;
	}

	cout << "The GCF is: " << div;

	return 0;
}
