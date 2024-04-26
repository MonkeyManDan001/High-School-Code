//ValidNumber Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int num;
	int x = 0;

	do
	{
		cout << "Please enter a number between 1 and 10: ";
		cin >> num;
		x = x + 1;
	} while (num <=10 && num>=1);

	cout << "Number is out of range. Good-bye!" << endl;

	return 0;
}
