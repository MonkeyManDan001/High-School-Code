//Teams Dan Mine

#include <iostream>
using namespace std;
int main()
{
	const int TEAMPLAYERS = 7;
	int players = 37;
	cout << "There will be " << players/TEAMPLAYERS << " teams with " << players%TEAMPLAYERS << " left over.";

	return 0;
}
