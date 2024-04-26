//RandomRed3Die Dan Mine

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int num;
	char answer;
	int seed = time(0);
	srand(seed);

	do
	{
		num = rand() % 6 + 1;
		cout << "You rolled a " << num << endl;
		cout << "Do you want to roll again? (y/n): ";
		cin >> answer;
	}while (answer == 'y');
	cout << "Program ends";
	return 0;
}
