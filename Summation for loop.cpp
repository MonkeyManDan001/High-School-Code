//Summation Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int numStart;
	int numEnd;

	cout << "Please enter a start value: ";
	cin >> numStart;

	cout << "Please enter an end value: ";
	cin >> numEnd;

	for (int i = numStart; i < numEnd; i = i + 1)
	{
		numStart += i + 1;
	}

	cout << numStart;

	return 0;
}
