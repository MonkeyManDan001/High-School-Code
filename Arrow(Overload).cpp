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
void DrawRightTriangle(int num2, char symbol)
{
	const char CHARACTER = symbol;
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
void DrawBottomTriangle(int num3, char symbol)
{
	const char CHARACTER = symbol;
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
void drawArrow(int num, char symbol)
{
	DrawRightTriangle(num - (num / 2),symbol);
	DrawBottomTriangle(num / 2,symbol);
}
//--------------------------------------------------------------
int main()
{
	int num;
	char symbol;
	cout << "Please enter the size of the arrow: ";
	cin >> num;
	cout << "Please enter a symbol: ";
	cin >> symbol;
	drawArrow(num);
	drawArrow(num,symbol);
	return 0;
}
