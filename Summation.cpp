//Summation Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int start;
	int end;

	cout << "Please enter a start value: ";
	cin >> start;

	cout << "Please enter an end value: ";
	cin >> end;

	int sum = start;

	while (start < end)
	{
		sum += start + 1;
		start = start + 1;
	}

	cout << "The sum is: " << sum;

	return 0;
}
