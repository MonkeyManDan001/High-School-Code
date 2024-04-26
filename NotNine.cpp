//NotNine Dan Mine

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//----------------------------------------------------------------
void generateNum()
{
	const int MIN = 800;
	const int MAX = 999;

	int seed = time(0);
	srand(seed);

	int num;
	int d1;
	int d2;
	int d3;
	int count = 0;

	do
	{
		num = rand() % (MAX - MIN + 1) + MIN;
		d1 = num % 10;
		d2 = num % 100 / 10;
		d3 = num / 100;
		cout << num << endl;
		count++;
	} while (d1 == 9 || d2 == 9 || d3 == 9);

	cout << "It took " << count << " times to generate that number.";
}
//----------------------------------------------------------------
int main()
{
	generateNum();
	return 0;
}
