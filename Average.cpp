//Average Dan Mine

#include <iostream>
using namespace std;
int main()
{
	double num;
	double num1;
	int count2 = 5;

	for (int count = 0; count < 5; count = count + 1)
	{
		cout << "Please enter " << count2 << " number(s): ";
		count2--;
		cin >> num1;
		num += num1;
	}

	cout << "The average is: " << num / 5;

	return 0;
}
