//RightTriangle Dan Mine

#include <iostream>
using namespace std;
//-------------------------------------------------------
void DrawRightTriangle(int num)
{
	const char CHARACTER = '*';
	for (int row = 1; row <= num; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			cout << CHARACTER;
		}
		cout << endl;
	}
}
//-------------------------------------------------------
int main()
{
	int num;
	cout << "Please enter the size of the triangle: ";
	cin >> num;
	DrawRightTriangle(num);
	return 0;
}
