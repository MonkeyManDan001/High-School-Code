//MinRowSum Dan Mine

#include <iostream>
using namespace std;
const int SIZE = 4;
//--------------------------------------------------
void displayMatrix(const int matrix[][SIZE])
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
//--------------------------------------------------
void displayArray(const int numbers[SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Row " << i << " Sum: " <<  numbers[i] << endl;
	}
}
//--------------------------------------------------
void getRowSums(const int matrix[][SIZE], int numbers[SIZE])
{
	for (int curRow = 0; curRow < SIZE; curRow++)
	{
		for (int curCol = 0; curCol < SIZE; curCol++)
		{
			numbers[curRow] += matrix[curRow][curCol];
		}
	}
}
//--------------------------------------------------
void findMin()
{

}
//--------------------------------------------------
int main()
{
	int matrix[SIZE][SIZE] = {{1, 2, 3, 4},{5, 0, 2, 2},{8, 1, 10, 3},{1, 4, 6, 8}};
	int numbers[SIZE];

	displayMatrix(matrix);

	cout << endl;

	getRowSums(matrix, numbers);
	displayArray(numbers);

	return 0;
}
