//MarkDiagonals Dan Mine

#include <iostream>
using namespace std;
const int SIZE = 4;
const char DEFAULT = '?';
//---------------------------------------------------
void setToDefault(char matrix[][SIZE])
{
	for (int curRow = 0; curRow < SIZE; curRow++)
	{
		for (int curCol = 0; curCol < SIZE; curCol++)
		{
			matrix[curRow][curCol] = DEFAULT;
		}
	}
}
//---------------------------------------------------
void minorDiag(char matrix[][SIZE])
{
	int x = 0;
	for (int i = SIZE - 1; i >= 0; i--)
	{
		matrix[i][x] = '*';
		x++;
	}
}
//---------------------------------------------------
void majorDiag(char matrix[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
		matrix[i][i] = '*';
}
//---------------------------------------------------
void displayMatrix(const char matrix[][SIZE])
{
	for (int curRow = 0; curRow < SIZE; curRow++)
	{
		for (int curCol = 0; curCol < SIZE; curCol++)
		{
			cout << matrix[curRow][curCol] << "\t";
		}
		cout << endl;
	}
}
//---------------------------------------------------
int main()
{
	char matrix[SIZE][SIZE] = {{DEFAULT,DEFAULT,DEFAULT,DEFAULT,},{DEFAULT,DEFAULT,DEFAULT,DEFAULT,},{DEFAULT,DEFAULT,DEFAULT,DEFAULT,},{DEFAULT,DEFAULT,DEFAULT,DEFAULT,}};

	displayMatrix(matrix);
	cout << endl;

	majorDiag(matrix);
	displayMatrix(matrix);

	setToDefault(matrix);

	minorDiag(matrix);

	cout << endl;

	displayMatrix(matrix);

	return 0;
}
