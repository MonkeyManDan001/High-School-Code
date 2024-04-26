//LinearInReverse Dan Mine

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int SIZE = 5;
//--------------------------------------------------------------
void loadRandomValues(int array[])
{
	int seed = time(0);
	srand(seed);

	for (int index = 0; index < SIZE; index++)
		array[index] = rand() % 24 + 1;
}
//--------------------------------------------------------------
void displayArray(const int array[])
{
	for (int index = 0; index < SIZE; index++)
		cout << array[index] << " ";
}
//--------------------------------------------------------------
int linearReverse(const int array[], int target)
{
	for (int index = SIZE - 1; index >= 0; index--)
	{
		if (array[index] == target)
			return index;
	}
	return -1;
}
//--------------------------------------------------------------
int main()
{
	int array[SIZE];
	int target;

	loadRandomValues(array);
	displayArray(array);

	cout << endl << "Please enter the number you are searching for: ";
	cin >> target;

	int forward = linearReverse(array, target);

	if (forward >= 0)
		cout << endl << "Your number was found in slot " << forward << ".";
	else
		cout << endl << "Your number was not found in the array.";

	return 0;
}
