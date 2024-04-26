//BottomRightTriangle Dan Mine

#include <iostream>
using namespace std;
//-------------------------------------------------------
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
//-------------------------------------------------------
int main()
{
	int num;
	cout << "Please enter the size of the triangle: ";
	cin >> num;
	DrawBottomTriangle(num);
	return 0;
}
