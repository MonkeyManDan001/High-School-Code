//FindMin Dan Mine

#include <iostream>
using namespace std;
const int SIZE = 7;
int array[SIZE] = {3, 2, 9, -4, 0, 5, -2};
//-----------------------------------------------------------
void displayArray(const int array[])
{
	for (int index = 0; index < SIZE; index++)
		cout << array[index] << " ";
}
//-----------------------------------------------------------
int findMin(const int array[])
{
  int min = array[0];

  for (int index = 0; index < SIZE; index++)
    if (array[index] < min)
      min = array[index];

  return min;
}
//-----------------------------------------------------------
int main()
{
	displayArray(array);
	int min = findMin(array);

	cout << endl << endl << "The minimum value is: " << min;

	return 0;
}
