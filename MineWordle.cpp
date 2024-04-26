//Wordle Dan Mine
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

//Global Constants
const int WORDLENGTH = 5;
const string LOWERCASE = "abcdefghijklmnopqrstuvwxyz";
const string UPPERCASE = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string EXISTS = "*";
const string NOTFOUND = "?";
const int NOTFOUNDINSTRING = -1;

//------------------------------------------------------------------------------------------------------------------------
//Precondition:  receives one string that contains only letters.
//Postcondition: returns a string in which all letters of the string parameter are converted to upper case.
string toUpper(string theWord)
{
	int length = theWord.length();
	string upLetter = "";

	for (int i = 0; i < length; i++)
	{
		string letter = theWord.substr(i,1);
		int index = LOWERCASE.find(letter);

		if (index == NOTFOUNDINSTRING)
		{
			upLetter += letter;
		}
		else
		{
			letter = UPPERCASE.substr(index,1);
			upLetter += letter;
		}
	}
	return upLetter;
}
//------------------------------------------------------------------------------------------------------------------------
//THIS FUNCTION IS GIVEN TO YOU IN ITS ENTIRETY
//Precondition:  No parameters
//Postcondition: A string of WORDLENGTH length with no duplicate letters and all capital letters
//                       is chosen randomly and returned.
string getRandomWord( )
{
	int seed = time(0);
	srand(seed);

	/****************************************************************************/
	/* NOTE:  If you add to this list of words, you are responsible for     */
	/*              for having the correct syntax, making sure no letters are */
	/*              repeated and are upper case, and changing the value    */
/*              of constant variable NUMWORDS.                                  */
	/****************************************************************************/

	const int NUMWORDS = 5;
	string words[ ] = {"BEACH", "ABOUT", "POINT", "FINAL", "TRACE"};

	int index = rand( ) % NUMWORDS;
	string randomWord = words[index];
	return randomWord;
}
//------------------------------------------------------------------------------------------------------------------------
//Precondition:  receives one string
//Postcondition: returns true if any of the letters in the string parameter are repeated and false otherwise.
bool hasRepeats(string theWord)
{
	int length = theWord.length();

	for (int i = 0; i < length; i++)
	{
		string letter = theWord.substr(i,1);
		for (int count = i + 1; count < length; count++)
		{
			string letter2 = theWord.substr(count,1);
			if(letter == letter2)
				return true;
		}
	}
	return false;
}
//------------------------------------------------------------------------------------------------------------------------
//Precondition:  Receives one string parameter
//Postcondition: returns true if the string contains only letters (upper or lower case), false otherwise.
bool onlyLetters(string theGuess)
{
	int length = theGuess.length();
	for (int i = 0; i < length; i++)
	{
		string letter = theGuess.substr(i, 1);
		int index = LOWERCASE.find(letter);
		int index2 = UPPERCASE.find(letter);
		if (index == NOTFOUNDINSTRING && index2 == NOTFOUNDINSTRING)
			return false;
	}
	return true;
}
//------------------------------------------------------------------------------------------------------------------------
//Precondition:  No parameters
//Postcondition: returns a valid string in uppercase letters (user may type in lower case).
string getGuess()
{
	string theGuess;
	string randomWord = getRandomWord();
  bool valid = false;
  string wordUpper;
	while (valid == false)
	{
		cout << "\tPlease enter a guess: ";
		getline(cin,theGuess);

		bool onlyLetter = onlyLetters(theGuess);

		while (onlyLetter == false)
		{
			cout << "\tOnly letters are allowed. Please enter again." << endl << endl;
			cout << "\tPlease enter a guess: ";
			getline(cin,theGuess);
			onlyLetter = onlyLetters(theGuess);
		}

		wordUpper = toUpper(theGuess);
		cout << "\tConverted to Upper: " << wordUpper << endl;

		while (theGuess.length() != WORDLENGTH)
		{
			cout << "\tYour word length is incorrect. Please enter again." << endl << endl;
			cout << "\tPlease enter a guess: ";
			getline(cin,theGuess);
			wordUpper = toUpper(theGuess);
			cout << "\tConverted to Upper: " << wordUpper << endl;
		}

		while (hasRepeats(theGuess) == true)
		{
			cout << "\tYou are not allowed to repeat letters in your guess. Please enter again." << endl << endl;
			cout << "\tPlease enter a guess: ";
			getline(cin,theGuess);
      wordUpper = toUpper(theGuess);
		}
    valid = true;
	}
	return wordUpper;
}
//------------------------------------------------------------------------------------------------------------------------
//Precondition:	receives 2 strings in this order:  The first string represents the answer. The second string
//		represents the guess.
//Postcondition: returns the formatted string based on the user’s guess as described in specs.
string formatGuess(string theAnswer, string theGuess)
{
  string format = "";

  for(int i = 0; i < WORDLENGTH; i++)
  {
    string ansLetter = theAnswer.substr(i,1);
    string guessLetter = theGuess.substr(i,1);
    int index = theAnswer.find(guessLetter);

    if (ansLetter == guessLetter)
      format += ansLetter;
    else if (index == NOTFOUNDINSTRING)
      format += NOTFOUND;
    else
      format += EXISTS;
  }
  return format;
}
//------------------------------------------------------------------------------------------------------------------------
//Precondition:	 receives one string
//Postcondition: each letter is displayed and is separated by tabs as shown in the sample output.
void display(string word)
{
  for (int i = 0; i < WORDLENGTH; i++)
  {
    string index = word.substr(i,1);
    cout << "\t" << index;
  }
  cout << endl << endl;
}
//------------------------------------------------------------------------------------------------------------------------

int main()
{
	string theAnswer = getRandomWord();
	int guessCount = 1;

	cout << "CHEAT LINE:   THE WORD IS: " << theAnswer << endl << endl;

	cout << "Guess Number: " << guessCount << endl << endl;

	string theGuess = getGuess();

	while (theGuess != theAnswer)
	{
		guessCount++;
		cout << "\nGuess Number: " << guessCount << endl << endl;
		string theFormat = formatGuess(theAnswer, theGuess);
		display(theFormat);
		theGuess = getGuess();
	}

	if (guessCount == 1)
		cout << endl << "CORRECT! It took you 1 try!";
	else
		cout << endl << "CORRECT!  It took you " << guessCount << " tries!";

	return 0;
}
/*
CHEAT LINE:   THE WORD IS: BEACH

Guess Number: 1

	Please enter a guess: 12345
	Only letters are allowed. Please enter again.

	Please enter a guess: 22AB2
	Only letters are allowed. Please enter again.

	Please enter a guess: #$%^&ABCD
	Only letters are allowed. Please enter again.

	Please enter a guess: hi
	Converted to Upper: HI
	Your word length is incorrect. Please enter again.

	Please enter a guess: computer
	Converted to Upper: COMPUTER
	Your word length is incorrect. Please enter again.

	Please enter a guess: programming
	Converted to Upper: PROGRAMMING
	Your word length is incorrect. Please enter again.

	Please enter a guess: happy
	Converted to Upper: HAPPY
	You are not allowed to repeat letters in your guess. Please enter again.

	Please enter a guess: abcbd
	You are not allowed to repeat letters in your guess. Please enter again.

	Please enter a guess: books
	You are not allowed to repeat letters in your guess. Please enter again.

	Please enter a guess: three
	You are not allowed to repeat letters in your guess. Please enter again.

	Please enter a guess: point

Guess Number: 2

	?	?	?	?	?

	Please enter a guess: habit
	Converted to Upper: HABIT

Guess Number: 3

	*	*	*	?	?

	Please enter a guess: heacb
	Converted to Upper: HEACB

Guess Number: 4

	*	E	A	C	*

	Please enter a guess: BEach
	Converted to Upper: BEACH

CORRECT!  It took you 4 tries!
*/
