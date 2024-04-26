//Change Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int cents;

	cout << "Enter the amount of change in cents: ";
	cin >> cents;

	const int QUARTERS = 25;
	const int DIMES = 10;
	const int NICKELS = 5;
	const int PENNIES = 1;

	int quarters = cents/QUARTERS;
	int dimes = cents%QUARTERS/DIMES;
	int nickels = cents%QUARTERS%DIMES/NICKELS;
	int pennies = cents%NICKELS/PENNIES;

	cout << "Quarters: " << quarters << endl;

	cout << "Dimes: " << dimes << endl;

	cout << "Nickels: " << nickels << endl;

	cout << "Pennies: " << pennies << endl;

	return 0;
}
