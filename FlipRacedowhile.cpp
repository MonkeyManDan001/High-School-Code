//FlipRacedowhile Dan Mine

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int coin1;
	int coin2;
	string coinFace1;
	string coinFace2;
	int headCount1 = 0;
	int headCount2 = 0;
	int seed = time(0);
	srand(seed);

	do
	{
		coin1 = rand() % 2 + 1;
		coin2 = rand() % 2 + 1;

		if (coin1 == 1)
			coinFace1 = "Heads";
		else
			coinFace1 = "Tails";

		if (coin2 == 1)
			coinFace2 = "Heads";
		else
			coinFace2 = "Tails";

		cout << "Coin1 is: " << coinFace1 << "     Coin2 is: " << coinFace2 << endl;

		if (coinFace1 == "Heads")
			headCount1 = headCount1 + 1;
		else
			headCount1 = 0;

		if (coinFace2 == "Heads")
			headCount2 = headCount2 + 1;
		else
			headCount2 = 0;

	}while (headCount1 != 3 && headCount2 != 3);

	if (headCount1 == 3 && headCount2 == 3)
		cout << "It's a Tie!";
	else if (headCount1 == 3)
		cout << "Coin 1 wins!";
	else
		cout << "Coin 2 wins!";

	return 0;
}
