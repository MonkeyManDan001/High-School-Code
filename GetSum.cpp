//GetSum Dan Mine

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int SIZE = 5;
//------------------------------------------------------
void loadRandomValues(int array[])
{
	int seed = time(0);
	srand(seed);

	for (int index = 0; index < SIZE; index++)
		array[index] = rand() % 9 + 1;
}
//------------------------------------------------------
void displayArray(const int array[])
{
	for (int index = 0; index < SIZE; index++)
		cout << array[index] << " ";
}
//------------------------------------------------------
int getSum(const int array[])
{
	int sum = 0;
	for (int index = 0; index < SIZE; index++)
		sum += array[index];
	return sum;
}
//------------------------------------------------------
int main()
{
	int array[SIZE];

	loadRandomValues(array);
	displayArray(array);
	int sum = getSum(array);
	cout << endl << "The sum is: " << sum;

	return 0;
}
