//AllEven Dan Mine

#include <iostream>
using namespace std;
const int ROWS = 2;
const int COLS = 3;
//----------------------------------------------------
bool allEven(const int matrix[][COLS])
{
	for (int curRow = 0; curRow < ROWS; curRow++)
	{
		for (int curCol = 0; curCol < COLS; curCol++)
		{
			if (matrix[curRow][curCol] % 2 != 0)
				return false;
		}
	}
	return true;
}
//----------------------------------------------------
int main()
{
	int matrix[ROWS][COLS] = {{-2,0,14},{-32,-10,50}};

	bool isEven = allEven(matrix);

	if (isEven == true)
		cout << "The matrix is loaded with all even integers.";
	else
		cout << "The matrix is not loaded with all even integers.";

	return 0;
}
