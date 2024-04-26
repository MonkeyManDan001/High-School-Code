//ThreeDigit Dan Mine
/*
The computer generates a random number between 100 and 999 inclusive. The user must guess the number using the amount of digits the computer says it has correct and how many are in the correct order.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MIN = 100;
const int MAX = 999;
//----------------------------------------------------------

//Precondition: needs a three digit number and three separate variables for each digit
//PostCondition: separates the number into 3 separate variables
void splitDigits (int theNumber, int &d1, int &d2, int &d3)
{
  d1 = theNumber / 100;
  d2 = theNumber % 100 / 10;
  d3 = theNumber % 10;
}
//----------------------------------------------------------

//Precondition: needs a three digit number
//PostCondition: finds any duplicated digits, returning true or false
bool isDuplicate(int aNumber)
{
	int d1;
	int d2;
	int d3;
	int dupStatus;

	splitDigits(aNumber, d1, d2, d3);

	if (d1 == d2 || d1 == d3 || d2 == d3)
		dupStatus = true;
	else
		dupStatus = false;

	return dupStatus;
}
//----------------------------------------------------------

//Precondition: falls within the MIN range and MAX range inclusive and contains unique digits
//PostCondition: returns a randomly generated valid three digit number
int GenerateNumber ()
{
	int seed = time(0);
	srand(seed);
	int theTarget = rand() % (MAX-MIN+1) + MIN;

	while(isDuplicate(theTarget) == true)
    {
		theTarget = rand() % (MAX-MIN+1) + MIN;
    }
	return theTarget;
}
//----------------------------------------------------------

//Precondition: user must enter a unique three digit number
//PostCondition: returns a valid three digit number from the user or repeats if an invalid number is entered
int GetGuess()
{
	int aNumber;

	cout << "\tPlease enter a 3 digit number: ";
	cin >> aNumber;

	while(aNumber > MAX || aNumber < MIN || isDuplicate(aNumber) == true)
	{
		if (aNumber > MAX || aNumber < MIN)
		{
			cout << "\tYour number is out of range." << endl << endl;
			cout << "\tPlease enter a 3 digit number: ";
			cin >> aNumber;
		}
		else if (isDuplicate(aNumber) == true)
		{
			cout << "\tNo duplicates allowed." << endl << endl;
			cout << "\tPlease enter a 3 digit number: ";
			cin >> aNumber;
		}
	}
	return aNumber;
}
//----------------------------------------------------------

//Precondition: receives the correct answer and the guess made by the user
//PostCondition: counts how many digits have been guessed correctly and sends back the count
void getDigitsCorrect(int theTarget, int theGuess, int &numCorrect)
{
	int td1, td2, td3, gd1, gd2, gd3;

	splitDigits(theTarget, td1, td2, td3);
	splitDigits(theGuess, gd1, gd2, gd3);

	if (td1 == gd1 || td1 == gd2 || td1 == gd3)
		numCorrect++;

	if (td2 == gd1 || td2 == gd2 || td2 == gd3)
		numCorrect++;

	if (td3 == gd1 || td3 == gd2 || td3 == gd3)
		numCorrect++;
}
//----------------------------------------------------------

//Precondition: receives the correct answer and the guess made by the user
//PostCondition: counts how many digits are in the correct order and sends back the count
void getOrderCorrect(int theTarget, int theGuess, int &orderCorrect)
{
	int td1, td2, td3, gd1, gd2, gd3;

	splitDigits(theTarget, td1, td2, td3);
	splitDigits(theGuess, gd1, gd2, gd3);

	if (td1 == gd1)
		orderCorrect++;

	if (td2 == gd2)
		orderCorrect++;

	if (td3 == gd3)
		orderCorrect++;
}

//----------------------------------------------------------
int main()
{
	int theTarget = GenerateNumber();
	int guessCount = 1;
	int numCorrect = 0;
	int orderCorrect = 0;

	cout << "Target number is: " << theTarget << endl;
	cout << "Current Guess Count: " << guessCount << endl << endl;

	int theGuess = GetGuess();

	while (theGuess != theTarget)
	{
		getDigitsCorrect(theTarget, theGuess, numCorrect);
		getOrderCorrect(theTarget, theGuess, orderCorrect);

		cout << endl << "\tDigits Correct: " << numCorrect << endl;
		cout << "\tOrder Correct: " << orderCorrect << endl << endl;

		numCorrect = 0;
		orderCorrect = 0;

		cout << "__________________________________________________" << endl;

		if (theGuess != theTarget)
		{
			guessCount++;
			cout << "Current Guess Count: " << guessCount << endl << endl;
			theGuess = GetGuess();
		}
	}

	cout << "\tDigits Correct: 3" << endl;
	cout << "\tOrder Correct: 3" << endl;
	cout << "__________________________________________________" << endl;
	cout << "It took you " << guessCount << " times to guess the right number";
	return 0;
}
/*
Target number is: 518
Current Guess Count: 1

	Please enter a 3 digit number: 225
	No duplicates allowed.

	Please enter a 3 digit number: 225
	No duplicates allowed.

	Please enter a 3 digit number: 222
	No duplicates allowed.

	Please enter a 3 digit number: 222
	No duplicates allowed.

	Please enter a 3 digit number: 212
	No duplicates allowed.

	Please enter a 3 digit number: 212
	No duplicates allowed.

	Please enter a 3 digit number: 1000
	Your number is out of range.

	Please enter a 3 digit number: 1000
	Your number is out of range.

	Please enter a 3 digit number: 99
	Your number is out of range.

	Please enter a 3 digit number: 99
	Your number is out of range.

	Please enter a 3 digit number: 826

	Digits Correct: 1
	Order Correct: 0

__________________________________________________
Current Guess Count: 2

	Please enter a 3 digit number: 182

	Digits Correct: 2
	Order Correct: 0

__________________________________________________
Current Guess Count: 3

	Please enter a 3 digit number: 185

	Digits Correct: 3
	Order Correct: 0

__________________________________________________
Current Guess Count: 4

	Please enter a 3 digit number: 518
	Digits Correct: 3
	Order Correct: 3
__________________________________________________
It took you 4 times to guess the right number
 */
