//OddEvenCount Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int number;
	int countEven = 0;
	int countOdd = 0;

	cout << "Please enter a number. Enter -99 to STOP : ";
	cin >> number;

	while (number != -99)
	{
		if (number % 2 == 0)
			countEven++;
		else
			countOdd++;

		cout << "Please enter a number. Enter -99 to STOP : ";
		cin >> number;
	}

	cout << "Evens: " << countEven << " Odds: " << countOdd;

	return 0;
}
