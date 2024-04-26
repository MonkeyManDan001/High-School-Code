//MatrixRef Dan Mine

#include <iostream>
using namespace std;
//Global Constants
const int ROWS = 4;
const int COLS = 3;
//------------------------------------------------------------
void loadMatrix (int theMatrix[][COLS])
{
	int num = 5;
	for (int curRow = 0; curRow < ROWS; curRow++)
	{
		for (int curCol = 0; curCol < COLS; curCol++)
		{
			theMatrix[curRow][curCol] = num;
			num = num + 5;
		}
	}
}
//------------------------------------------------------------
void displayMatrix (const int theMatrix[][COLS])
{
	for (int curRow = 0; curRow < ROWS; curRow++)
	{
		for (int curCol = 0; curCol < COLS; curCol++)
		{
			cout << theMatrix[curRow][curCol] << " ";
		}
		cout << endl; //go to next line after every element in
	}				//the current row is displayed
}
//------------------------------------------------------------
int main()
{
	int board[ROWS][COLS];
	loadMatrix(board);
	displayMatrix(board);
	return 0;
}
