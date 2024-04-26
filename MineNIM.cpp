//MineNIM
//Code that plays the Nim Game with a computer that generates random numbers while taking from a random pile size

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
  const int MIN = 10; //min value for pileSize
  const int MAX = 100; //max value for pileSize

  int seed = time(0); //generates random numbers
  srand(seed);

  string playerName; //variable for player's name
  int pileSize = rand() % (MAX-MIN+1) + MIN; //random pile size generator
  int goesFirst = rand() % 2; //decides who goes first
  int hstones; //amount of stones the human takes

  cout << "Enter your name: ";
  getline(cin, playerName); //gets player name
  cout << "------------------------------------------------------" << endl;

  while (pileSize > 1) //if its equal to 1 that means the next person loses since its the last rock
  {
    if (goesFirst == 0) //decides who's turn it is (0 = human, 1 = computer)
    {
      cout << "It is " << playerName << "'s turn" << endl << endl;
      cout << "The current pile has " << pileSize << " stones." << endl;
      cout << "Please enter the amount to take: ";
      cin >> hstones;
      while (hstones < 1 || hstones > pileSize / 2)  //loops until a valid number is entered
      {
         cout << "Illegal Amount. Try Again!\n\tPlease enter the amount to take: ";
         cin >> hstones;
      }
      cout << endl;
      cout << playerName << " took " << hstones;
      pileSize = pileSize - hstones; //subtracts the stones taken from the pile
      cout << endl << "------------------------------------------------------" << endl;
    }
    else
    {
      int cstones = rand() % (pileSize / 2) + 1; //generates a random valid number for the computer to take
      cout << "It is Computer's turn" << endl << endl;
      cout << "The current pile has ";
      cout << pileSize << " stones." << endl << endl;
      cout << "Computer took " << cstones << endl;
      pileSize = pileSize - cstones;  //subtracts the stones taken from the pile
      cout << "------------------------------------------------------" << endl;
    }
    goesFirst = (goesFirst + 1) % 2; //switches the turn to opposite player
  }

  if (goesFirst == 1) //computer is assigned goesFirst == 1 meaning computer took the last rock if this statement is true
  {
	  cout << "It is Computer's turn" << endl << endl;
	  cout << "The current pile has 1 stone." << endl << endl;
	  cout << "Computer took 1" << endl;
	  cout << playerName << " wins! Game over!";
  }
  else
  {
	  cout << "It is " << playerName << "'s turn" << endl << endl;
	  cout << "The current pile has 1 stone." << endl;
	  cout << "Please enter the amount to take: 1" << endl << endl;
	  cout << playerName << " took 1" << endl;
	  cout << "Computer wins! Game over!";
  }

  return 0;
}

//TEST CASES COVERED: #1,2,3,5,7

/*
Enter your name: Dan Mine
------------------------------------------------------
It is Dan Mine's turn

The current pile has 37 stones.
Please enter the amount to take: 19
Illegal Amount. Try Again!
	Please enter the amount to take: 0
Illegal Amount. Try Again!
	Please enter the amount to take: -1
Illegal Amount. Try Again!
	Please enter the amount to take: -1
Illegal Amount. Try Again!
	Please enter the amount to take: -1
Illegal Amount. Try Again!
	Please enter the amount to take: 18

Dan Mine took 18
------------------------------------------------------
It is Computer's turn

The current pile has 19 stones.

Computer took 8
------------------------------------------------------
It is Dan Mine's turn

The current pile has 11 stones.
Please enter the amount to take: 3

Dan Mine took 3
------------------------------------------------------
It is Computer's turn

The current pile has 8 stones.

Computer took 4
------------------------------------------------------
It is Dan Mine's turn

The current pile has 4 stones.
Please enter the amount to take: 1

Dan Mine took 1
------------------------------------------------------
It is Computer's turn

The current pile has 3 stones.

Computer took 1
------------------------------------------------------
It is Dan Mine's turn

The current pile has 2 stones.
Please enter the amount to take: 1

Dan Mine took 1
------------------------------------------------------
It is Computer's turn

The current pile has 1 stone.

Computer took 1
Dan Mine wins! Game over!
 */

//TEST CASES COVERED: #4,6

/*
Enter your name: Dan Mine
------------------------------------------------------
It is Dan Mine's turn

The current pile has 14 stones.
Please enter the amount to take: 7

Dan Mine took 7
------------------------------------------------------
It is Computer's turn

The current pile has 7 stones.

Computer took 3
------------------------------------------------------
It is Dan Mine's turn

The current pile has 4 stones.
Please enter the amount to take: 2

Dan Mine took 2
------------------------------------------------------
It is Computer's turn

The current pile has 2 stones.

Computer took 1
------------------------------------------------------
It is Dan Mine's turn

The current pile has 1 stone.
Please enter the amount to take: 1

Dan Mine took 1
Computer wins! Game over!
 */
