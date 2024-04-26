//arrayTravRef Dan Mine

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int ARRAY_SIZE = 5;	//global constant

int main()
{
	int numbers [ARRAY_SIZE];	//use global constant in declaration

	//shuffle the "cards"
	int seed = time(0);
	srand(seed);
	//Traverse the array. i.e. visit every slot in the array.
	//Assign the random values from 0-99 inclusive in every slot.
	for (int index = 0; index < ARRAY_SIZE; index++)
		numbers[index] = rand() % 100;

	//Traverse the array and Display the contents of every slot.
	for (int index = 0; index < ARRAY_SIZE; index++)
		cout << "numbers[" << index << "]-" << numbers[index] << endl;
}
