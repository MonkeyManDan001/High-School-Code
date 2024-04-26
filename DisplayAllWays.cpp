//DisplayAllWays Dan Mine

#include <iostream>
using namespace std;
const int ROWS = 2;
const int COLS = 3;
//------------------------------------------------
void displayColumnMajorOrder(const int matrix[][COLS])
{
	for (int curCol = 0; curCol < COLS; curCol++)
	{
		for (int curRow = 0; curRow < ROWS; curRow++)
		{
			cout << matrix[curRow][curCol] << " ";
		}
	}
}
//------------------------------------------------
void displayBackwards(const int matrix[][COLS])
{
	for (int curRow = ROWS - 1; curRow >= 0; curRow--)
	{
		for (int curCol = COLS - 1; curCol >= 0; curCol--)
		{
			cout << matrix[curRow][curCol] << " ";
		}
	}
}
//------------------------------------------------
void displayForwards(const int matrix[][COLS])
{
	for (int curRow = 0; curRow < ROWS; curRow++)
	{
		for (int curCol = 0; curCol < COLS; curCol++)
		{
			cout << matrix[curRow][curCol] << " ";
		}
	}
}
//------------------------------------------------
void loadMatrix(int matrix[][COLS])
{
	int num = 1;
	for (int curRow = 0; curRow < ROWS; curRow++)
	{
		for (int curCol = 0; curCol < COLS; curCol++)
		{
			matrix[curRow][curCol] = num;
			num++;
		}
	}
}
//------------------------------------------------
int main()
{
	int matrix[ROWS][COLS];

	loadMatrix(matrix);
	displayForwards(matrix);
	cout << endl;
	displayBackwards(matrix);
	cout << endl;
	displayColumnMajorOrder(matrix);

	return 0;
}
