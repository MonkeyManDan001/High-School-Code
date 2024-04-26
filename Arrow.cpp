//Arrow Dan Mine

#include <iostream>
using namespace std;
//--------------------------------------------------------------
void DrawRightTriangle(int num2)
{
	const char CHARACTER = '*';
	for (int row = 1; row <= num2; row++)
	{
		for (int col = 1; col <= row; col++)
		{
			cout << CHARACTER;
		}
		cout << endl;
	}
}
//--------------------------------------------------------------
void DrawBottomTriangle(int num3)
{
	const char CHARACTER = '*';
	for (int row = num3; row >= 1; row--)
	{
		for (int col = 1; col <= row; col++)
		{
			cout << CHARACTER;
		}
		cout << endl;
	}
}
//--------------------------------------------------------------
void drawArrow(int num)
{
	DrawRightTriangle(num - (num / 2));
	DrawBottomTriangle(num / 2);
}
//--------------------------------------------------------------
int main()
{
	int num;
	cout << "Please enter the size of the arrow: ";
	cin >> num;
	drawArrow(num);
	return 0;
}
