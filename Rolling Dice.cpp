//Rolling Dice Dan Mine

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int roll1;
	int roll2;
	int rollSum;
	char answer;
	int seed = time(0);
	srand(seed);

	do
	{
		roll1 = rand() % 6 + 1;
		roll2 = rand() % 6 + 1;
		cout << "Roll1: " << roll1 << "   ";
		cout << "Roll2: " << roll2 << "   ";
		rollSum = roll1 + roll2;
		cout << "Sum: " << rollSum << endl;
		cout << "Do you want to roll some dice? ";
		cin >> answer;
		cout << endl;
	}while (answer == 'y' || answer == 'Y');

	cout << "Thanks for playing the dice game";

	return 0;
}
