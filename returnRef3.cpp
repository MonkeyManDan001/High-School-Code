//returnRef3 Dan Mine

#include <iostream>
using namespace std;

//--------------------------------------------------
char getLetter()
{
	char letter;
	cout << "Please enter a letter: ";
	cin >> letter;
	return letter;
}
//--------------------------------------------------
bool compareLetters(char first, char second)
{
	if (first == second)
		return true;
	else
		return false;
}
//--------------------------------------------------
int main()
{
	//Declare variables
	char firstLetter, secondLetter;
	bool theSame;

	//Get data
	firstLetter = getLetter();
	secondLetter = getLetter();

	//Process Data
	theSame = compareLetters(firstLetter, secondLetter);

	//Report on Data
	if (theSame == true)
		cout << "The letters are the same";
	else
		cout << "The letters are different";

	return(0);
}
