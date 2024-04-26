//LastLetters Dan Mine

#include <iostream>
#include <vector>
#include <string>
using namespace std;
const int ROWS = 2;
const int COLS = 3;
//--------------------------------------------------
void displayVector(vector <string> vector)
{
	for (unsigned int i = 0; i < vector.size(); i++)
	{
		cout << "     " << vector[i];
	}
}
//--------------------------------------------------
void displayMatrix(const string matrix[][COLS])
{
	for (int curRow = 0; curRow < ROWS; curRow++)
	{
		for (int curCol = 0; curCol < COLS; curCol++)
		{
			cout << "     " << matrix[curRow][curCol];
		}
		cout << endl;
	}
}
//--------------------------------------------------
vector<string> loadVector(const string matrix[][COLS], string target)
{
	vector <string> vector;
	int i = 0;

	for (int curRow = 0; curRow < ROWS; curRow++)
	{
		for (int curCol = 0; curCol < COLS; curCol++)
		{
			if (matrix[curRow][curCol].substr(matrix[curRow][curCol].length()-1,1) == target)
			{
				vector.resize(vector.size()+1);
				vector[i] = matrix[curRow][curCol];
				i++;
			}
		}
	}
	return vector;
}
//--------------------------------------------------
int main()
{
	string matrix[ROWS][COLS] = {{"Andy","Cassidy","Tom"},{"Mary","Victor","Nancy"}};
	string target;

	cout << "The values in the matrix are:" << endl << endl;

	displayMatrix(matrix);

	cout << endl << "Please enter the target value: ";
	cin >> target;
	cout << endl;
	cout << "The values that end in \"" << target << "\" are:" << endl << endl;

	vector <string> vector = loadVector(matrix, target);
	displayVector(vector);

	return 0;
}
