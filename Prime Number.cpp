//Prime Number Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int numStart;
	int numEnd;
	int count = 0;

	cout << "Enter starting number: ";
	cin >> numStart;

	cout << "Enter ending number: ";
	cin >> numEnd;

	for (numStart; numStart <= numEnd; numStart++)
	{
		while (numStart <= numEnd)
		{
			if (numStart % 2 != 0 && numStart % 3 != 0)
			{
				count++;
			}
		}
		cout << "Number of primes in range: " << count;
	}

	return 0;
}
