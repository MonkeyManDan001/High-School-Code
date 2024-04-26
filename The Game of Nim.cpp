//The Game of Nim Dan Mine

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	/*
	 * 
	 */
	const int MIN = 10;
	const int MAX = 100;

	int seed = time(0);
	srand(seed);

	int pileSize = rand() % 100 + 10;
	int turn = rand() % 2;
	int hstones;
	int cstones = rand() % (pileSize) + 1;

	if (turn == 0)
	{
		cout << "Please enter how many stones would you like to take: ";
		cin >> hstones;
		cout << "The human took " << hstones << " stone(s).";
		if (hstones < 1 || hstones > (pileSize*1/2))
		{
			cout << "An invalid number was taken.";
		}
	}
	else
	{
		cout << "The computer took " << cstones << " stone(s).";
	}

	return 0;
}
