//PerfectSquare Mine

#include <iostream>
#include <cmath>
using namespace std;
//---------------------------------------------------------
bool isPerfectSquare(int count)
{
	int square = count;
	square = sqrt(square);
	square = pow(square, 2);
	if (square == count)
		return true;
	else
		return false;
}
//---------------------------------------------------------
int main()
{
	cout << "Perfect squares from 1 to 20: ";

	int count = 1;

	while (count <= 20)
	{
		bool perfectsq = isPerfectSquare(count);

		if (perfectsq == true)
			cout << endl << count;

		count++;
	}

	return 0;
}
