//arrayPassingRef2 Dan Mine

#include <iostream>
using namespace std;

const int SIZE = 5; //global constant

//-------------------------------------------------------------------------------------------
void initialize(int theArray[ ]) //Received to modify array contents
{
	//Visit every slot in the array and initialize each slot to 0.
	for (int index = 0; index < SIZE ; index++)
		theArray[index] = 0;
}
//-------------------------------------------------------------------------------------------
void loadValues(int arr[ ]) //Received to modify array contents
{
	int num;
	//Ask the user for a number and place in the next available slot
	for (int index = 0; index < SIZE ; index++)
	{
		cout << "Enter the number: ";
		cin >> num;
		arr[index] = num;
	}
}
//-------------------------------------------------------------------------------------------
void display(const int myArray[ ]) //Received to NOT modify array contents
{
	//Visit every slot in the array and display values.
	for (int index = 0; index < SIZE ; index++)
		cout << "myArray[" << index << "]=" << myArray[index] << endl;
}

//------------------------------------------------------
int main( )
{
	int myArray[SIZE];
	initialize (myArray);	//wipes out the “junk” in slots
	display (myArray);	//display the contents of each slot
	loadValues (myArray);	//assign slots a value entered by user.
	display (myArray);	//display the contents of each slot
	return(0);
}
