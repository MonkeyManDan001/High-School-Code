//Generic TicTacToe Dan Mine

#include <iostream>
#include <string>
using namespace std;
const int SIZE = 3;
const string DEFAULT = "?";
const string MARK = "X";
const string MARK2 = "O";
const int NOTFOUND = -1;
//----------------------------------------------------
//Precondition: receives a string matrix with a set size
//Postcondition: outputs the values and the indices of the matrix
//Description: this outputs the current board with all of the current X's and O's
void displayGameBoard(const string matrix[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
		cout << "    " << i;

	cout << endl << endl;

	for (int curRow = 0; curRow < SIZE; curRow++)
	{
		cout << curRow;
		for (int curCol = 0; curCol < SIZE; curCol++)
		{
			cout  << "  [" << matrix[curRow][curCol] << "]";
		}
		cout << endl << endl;
	}
}
//----------------------------------------------------
//Precondition: receives a string matrix with a set size
//Postcondition: checks to see if any player wins horizontally
//Description: this checks to see if any of the players won horizontally
bool horizWin(const string matrix[][SIZE])
{
	string index1 = "";
	string index2 = "";
	string index3 = "";

	for (int i = 0; i < SIZE; i++)
	{
		index1 += MARK;
		index2 += MARK2;
	}

	for (int curRow = 0; curRow < SIZE; curRow++)
	{
		for (int curCol = 0; curCol < SIZE; curCol++)
		{
			index3 += matrix[curRow][curCol];

			if (index1 == index3 || index2 == index3)
			{
				return true;
			}
		}
		index3 = "";
	}
	return false;
}
//----------------------------------------------------
//Precondition: receives a string matrix with a set size
//Postcondition: checks to see if any player wins vertically
//Description: this checks to see if any of the players won vertically
bool vertWin(const string matrix[][SIZE])
{
	string index1 = "";
	string index2 = "";
	string index3 = "";

	for (int i = 0; i < SIZE; i++)
	{
		index1 += MARK;
		index2 += MARK2;
	}

	for (int curCol = 0; curCol < SIZE; curCol++)
	{
		for (int curRow = 0; curRow < SIZE; curRow++)
		{
			index3 += matrix[curRow][curCol];

			if (index1 == index3 || index2 == index3)
			{
				return true;
			}
		}
		index3 = "";
	}
	return false;
}
//----------------------------------------------------
//Precondition: receives a string matrix with a set size
//Postcondition: checks to see if any player wins major diagonally
//Description: this checks to see if any of the players won major diagonally
bool majDiagWin(const string matrix[][SIZE])
{
	string index1 = "";
	string index2 = "";
	string index3 = "";

	for (int i = 0; i < SIZE; i++)
	{
		index1 += MARK;
		index2 += MARK2;
	}

	for (int i = SIZE - 1; i >= 0; i--)
	{
		index3 += matrix[i][i];

		if (index1 == index3 || index2 == index3)
		{
			return true;
		}
	}
	return false;
}
//----------------------------------------------------
//Precondition: receives a string matrix with a set size
//Postcondition: checks to see if any player wins minor diagonally
//Description: this checks to see if any of the players won minor diagonally
bool minDiagWin(const string matrix[][SIZE])
{
	string index1 = "";
	string index2 = "";
	string index3 = "";
	int x = 0;

	for (int i = 0; i < SIZE; i++)
	{
		index1 += MARK;
		index2 += MARK2;
	}

	for (int i = SIZE - 1; i >= 0; i--)
	{
		index3 += matrix[i][x];
		x++;

		if (index1 == index3 || index2 == index3)
		{
			return true;
		}
	}
	return false;
}
//----------------------------------------------------
//Precondition: receives a string matrix with a set size
//Postcondition: checks to see if all slots are filled to produce a tie
//Description: this checks to see if all of the slots are filled without a win, resulting in a tie
bool ifTie (const string matrix[][SIZE])
{
	string index1 = "";
	int index2;

	for (int curRow = 0; curRow < SIZE; curRow++)
	{
		for (int curCol = 0; curCol < SIZE; curCol++)
		{
			index1 += matrix[curRow][curCol];
		}
	}
	index2 = index1.find(DEFAULT);

	if (index2 == NOTFOUND)
	{
		return true;
	}
	return false;
}
//----------------------------------------------------
//Precondition: receives a string matrix with a set size and a valid integer row, column, and turn variable
//Postcondition: determines the player’s turn and inputs an “X” or “O” in the row and column selected
//Description:this determines which players’ turn it is and inputs an “X” or an “O” in the slot selected in the previous function
void inputMatrix(string matrix[][SIZE], int row, int col, int turn)
{
	if (turn % 2 == 0)
			matrix[row][col] = MARK;

	if (turn % 2 == 1)
			matrix[row][col] = MARK2;
}
//----------------------------------------------------
//Precondition: receives an integer row and column
//Postcondition: a row and column are input by the user
//Description: this allows the user to input a row and column to make a move
void selectRowAndColumn(int &row, int &col)
{
	cout << "Row: ";
	cin >> row;
	cout << endl << "Col: ";
	cin >> col;
	cout << endl;
}
//----------------------------------------------------
//Precondition: receives a string matrix with a certain size and an integer row and a column
//Postcondition: loops until the row and column are valid and not in a taken slot
//Description: this makes sure a row and column input by the user is valid
void getValidMove(const string matrix[][SIZE], int &row, int &col)
{
	while (row < 0 || row > SIZE-1 || col < 0 || col > SIZE-1)
	{
		cout << "Invalid row and/or column. Please enter again" << endl << endl;
		selectRowAndColumn(row, col);
	}

	while (matrix[row][col] == MARK || matrix[row][col] == MARK2)
	{
		cout << "That slot is taken. Please enter again" << endl << endl;
		selectRowAndColumn(row, col);
	}
}
//----------------------------------------------------
//Precondition: receives a string matrix with a certain size
//Postcondition: sets all characters in the matrix to DEFAULT
//Description: this allows the the board to start off with DEFAULT values in each slot to start the game
void startBoard(string matrix[][SIZE])
{
	for (int curRow = 0; curRow < SIZE; curRow++)
	{
		for (int curCol = 0; curCol < SIZE; curCol++)
		{
			matrix[curRow][curCol] = DEFAULT;
		}
	}
}
//----------------------------------------------------
int main()
{
	string matrix[SIZE][SIZE];
	string p1,p2;
	int row = 0;
	int col = 0;
	int turn = 0;

	startBoard(matrix);

	cout << "Player 1 Name: ";
	getline(cin,p1);
	cout << endl << "Player 2 Name: ";
	getline(cin,p2);
	cout << endl;

	bool hWin = horizWin(matrix);
	bool vWin = vertWin(matrix);
	bool majWin = majDiagWin(matrix);
	bool minWin = minDiagWin(matrix);
	bool tie = ifTie(matrix);

	if (turn % 2 == 0)
		cout << "It is " << p1 << "'s turn" << endl << endl;
	else
			cout << "It is " << p2 << "'s turn" << endl << endl;

	displayGameBoard(matrix);

	while (hWin == false && vWin == false && majWin == false && minWin == false && tie == false)
	{
		selectRowAndColumn(row, col);

		while (row < 0 || row > SIZE-1 || col < 0 || col > SIZE-1 || matrix[row][col] == MARK || matrix[row][col] == MARK2)
		{
			getValidMove(matrix, row, col);
		}

		inputMatrix(matrix, row, col, turn);

		turn++;

		if (turn % 2 == 0)
			cout << "It is " << p1 << "'s turn" << endl << endl;
		else
			cout << "It is " << p2 << "'s turn" << endl << endl;

		displayGameBoard(matrix);
		hWin = horizWin(matrix);
		vWin = vertWin(matrix);
		majWin = majDiagWin(matrix);
		minWin = minDiagWin(matrix);
		tie = ifTie(matrix);
	}

	turn--;

	if (tie == true)
		cout << "It's a tie!";
	else if (turn % 2 == 0)
		cout << p1 << " won!";
	else if (turn % 2 == 1)
		cout << p2 << " won!";

	return 0;
}
/*
TEST CASES #1-3

Player 1 Name: Lucy

Player 2 Name: Elliot

It is Lucy's turn

    0    1    2    3

0  [?]  [?]  [?]  [?]

1  [?]  [?]  [?]  [?]

2  [?]  [?]  [?]  [?]

3  [?]  [?]  [?]  [?]

Row: -1

Col: 4

Invalid row and/or column. Please enter again

Row: 0

Col: 4

Invalid row and/or column. Please enter again

Row: 0

Col: 0

It is Elliot's turn

    0    1    2    3

0  [X]  [?]  [?]  [?]

1  [?]  [?]  [?]  [?]

2  [?]  [?]  [?]  [?]

3  [?]  [?]  [?]  [?]

Row: 0

Col: 0

That slot is taken. Please enter again

Row: 0

Col: 0

That slot is taken. Please enter again

Row: 0

Col: 1

It is Lucy's turn

    0    1    2    3

0  [X]  [O]  [?]  [?]

1  [?]  [?]  [?]  [?]

2  [?]  [?]  [?]  [?]

3  [?]  [?]  [?]  [?]

Row: 0

Col: 1

That slot is taken. Please enter again

Row: 4

Col: 4

Invalid row and/or column. Please enter again

Row: 1

Col: 1

It is Elliot's turn

    0    1    2    3

0  [X]  [O]  [?]  [?]

1  [?]  [X]  [?]  [?]

2  [?]  [?]  [?]  [?]

3  [?]  [?]  [?]  [?]

Row: 3

Col: 0

It is Lucy's turn

    0    1    2    3

0  [X]  [O]  [?]  [?]

1  [?]  [X]  [?]  [?]

2  [?]  [?]  [?]  [?]

3  [O]  [?]  [?]  [?]

Row: 2

Col: 2

It is Elliot's turn

    0    1    2    3

0  [X]  [O]  [?]  [?]

1  [?]  [X]  [?]  [?]

2  [?]  [?]  [X]  [?]

3  [O]  [?]  [?]  [?]

Row: 3

Col: 1

It is Lucy's turn

    0    1    2    3

0  [X]  [O]  [?]  [?]

1  [?]  [X]  [?]  [?]

2  [?]  [?]  [X]  [?]

3  [O]  [O]  [?]  [?]

Row: 3

Col: 3

It is Elliot's turn

    0    1    2    3

0  [X]  [O]  [?]  [?]

1  [?]  [X]  [?]  [?]

2  [?]  [?]  [X]  [?]

3  [O]  [O]  [?]  [X]

Lucy won!

TEST CASE #4

Player 1 Name: Lucy

Player 2 Name: Elliot

It is Lucy's turn

    0    1    2

0  [?]  [?]  [?]

1  [?]  [?]  [?]

2  [?]  [?]  [?]

Row: 0

Col: 2

It is Elliot's turn

    0    1    2

0  [?]  [?]  [X]

1  [?]  [?]  [?]

2  [?]  [?]  [?]

Row: 0

Col: 1

It is Lucy's turn

    0    1    2

0  [?]  [O]  [X]

1  [?]  [?]  [?]

2  [?]  [?]  [?]

Row: 1

Col: 2

It is Elliot's turn

    0    1    2

0  [?]  [O]  [X]

1  [?]  [?]  [X]

2  [?]  [?]  [?]

Row: 1

Col: 1

It is Lucy's turn

    0    1    2

0  [?]  [O]  [X]

1  [?]  [O]  [X]

2  [?]  [?]  [?]

Row: 2

Col: 2

It is Elliot's turn

    0    1    2

0  [?]  [O]  [X]

1  [?]  [O]  [X]

2  [?]  [?]  [X]

Lucy won!

TEST CASE #5

Player 1 Name: Lucy

Player 2 Name: Elliot

It is Lucy's turn

    0    1    2

0  [?]  [?]  [?]

1  [?]  [?]  [?]

2  [?]  [?]  [?]

Row: 2

Col: 0

It is Elliot's turn

    0    1    2

0  [?]  [?]  [?]

1  [?]  [?]  [?]

2  [X]  [?]  [?]

Row: 1

Col: 0

It is Lucy's turn

    0    1    2

0  [?]  [?]  [?]

1  [O]  [?]  [?]

2  [X]  [?]  [?]

Row: 2

Col: 1

It is Elliot's turn

    0    1    2

0  [?]  [?]  [?]

1  [O]  [?]  [?]

2  [X]  [X]  [?]

Row: 1

Col: 1

It is Lucy's turn

    0    1    2

0  [?]  [?]  [?]

1  [O]  [O]  [?]

2  [X]  [X]  [?]

Row: 2

Col: 2

It is Elliot's turn

    0    1    2

0  [?]  [?]  [?]

1  [O]  [O]  [?]

2  [X]  [X]  [X]

Lucy won!

TEST CASE #6

Player 1 Name: Lucy

Player 2 Name: Elliot

It is Lucy's turn

    0    1    2

0  [?]  [?]  [?]

1  [?]  [?]  [?]

2  [?]  [?]  [?]

Row: 0

Col: 0

It is Elliot's turn

    0    1    2

0  [X]  [?]  [?]

1  [?]  [?]  [?]

2  [?]  [?]  [?]

Row: 1

Col: 0

It is Lucy's turn

    0    1    2

0  [X]  [?]  [?]

1  [O]  [?]  [?]

2  [?]  [?]  [?]

Row: 1

Col: 1

It is Elliot's turn

    0    1    2

0  [X]  [?]  [?]

1  [O]  [X]  [?]

2  [?]  [?]  [?]

Row: 2

Col: 0

It is Lucy's turn

    0    1    2

0  [X]  [?]  [?]

1  [O]  [X]  [?]

2  [O]  [?]  [?]

Row: 2

Col: 2

It is Elliot's turn

    0    1    2

0  [X]  [?]  [?]

1  [O]  [X]  [?]

2  [O]  [?]  [X]

Lucy won!

TEST CASE #7

Player 1 Name: Lucy

Player 2 Name: Elliot

It is Lucy's turn

    0    1    2

0  [?]  [?]  [?]

1  [?]  [?]  [?]

2  [?]  [?]  [?]

Row: 0

Col: 2

It is Elliot's turn

    0    1    2

0  [?]  [?]  [X]

1  [?]  [?]  [?]

2  [?]  [?]  [?]

Row: 0

Col: 1

It is Lucy's turn

    0    1    2

0  [?]  [O]  [X]

1  [?]  [?]  [?]

2  [?]  [?]  [?]

Row: 1

Col: 1

It is Elliot's turn

    0    1    2

0  [?]  [O]  [X]

1  [?]  [X]  [?]

2  [?]  [?]  [?]

Row: 1

Col: 0

It is Lucy's turn

    0    1    2

0  [?]  [O]  [X]

1  [O]  [X]  [?]

2  [?]  [?]  [?]

Row: 2

Col: 0

It is Elliot's turn

    0    1    2

0  [?]  [O]  [X]

1  [O]  [X]  [?]

2  [X]  [?]  [?]

Lucy won!

TEST CASE #8


*/
