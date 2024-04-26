//Time Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int minutes;

	cout << "Enter the number of minutes: ";
	cin >> minutes;

	int digit1 = minutes/60;
	int digit2 = minutes%60/10;
	int digit3 = minutes%100;
	int digit4 = digit3%10;

	cout << "Time is: " << digit1 << ":" << digit2 << digit4;

	return 0;
}
