//DisplayReverse Dan Mine

#include <iostream>
using namespace std;
const int SIZE = 5;
//-----------------------------------------------------------
void loadUserValues(int array[])
{
	int num;

	for (int index = 0; index < SIZE ; index++)
	{
		cout << "Enter the number: ";
		cin >> num;
		array[index] = num;
	}
}
//-----------------------------------------------------------
void displayReverseArray(const int array[])
{
	for (int index = SIZE - 1; index >= 0; index--)
		cout << array[index] << " ";
}
//-----------------------------------------------------------
int main()
{
	int array[SIZE];

	loadUserValues(array);
	displayReverseArray(array);

	return 0;
}
