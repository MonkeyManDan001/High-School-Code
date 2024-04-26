//Digits in Reverse on Separate Lines Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int num;

	cout << "Please enter a number: ";
	cin >> num;

	cout << num << endl;

	while (num > 0)
	{
		cout << num % 10;
		num = num / 10;
		cout << endl;
	}

	return 0;
}
