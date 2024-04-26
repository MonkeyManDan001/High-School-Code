//BottomRightTriangle Dan Mine

#include <iostream>
using namespace std;
//-----------------------------------------------------
void DrawBottomTriangle(int num)
{
	const char CHARACTER = '*';
	for (int row = num; row >= 1; row--)
	{
		for (int col = 1; col <= row; col++)
		{
			cout << CHARACTER;
		}
		cout << endl;
	}
}
//-----------------------------------------------------
void DrawBottomTriangle(int num, char symbol)
{
	const char CHARACTER = symbol;
	for (int row = num; row >= 1; row--)
	{
		for (int col = 1; col <= row; col++)
		{
			cout << CHARACTER;
		}
		cout << endl;
	}
}
//-----------------------------------------------------
int main()
{
	int num;
	char symbol;
	cout << "Please enter a number: ";
	cin >> num;	//user types 5
	cout << "Please enter a symbol: ";
	cin >> symbol; //user types 'A'
	DrawBottomTriangle (num);
	DrawBottomTriangle (num, symbol);
	return 0;
	return 0;
}
