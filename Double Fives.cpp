//Double Fives Dan Mine

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int roll1;
	int roll2;
	int rollNum = 0;
	int seed = time(0);
	srand(seed);

	do
	{
		roll1 = rand() % 6 + 1;
		roll2 = rand() %6 +1;
		cout << roll1 << "   " << roll2;
		cout << endl;
		rollNum = rollNum + 1;
	}while (roll1 != 5 || roll2 != 5);

		cout << "It took " << rollNum << " rolls to get double fives.";

	return 0;
}
