//Filled Square Dan Mine

#include <iostream>
using namespace std;
//----------------------------------------------------
void DrawSquare(int size, char symbol = '%')
{
	int i = 0;
	while(i < size)
	{
		while (i < size)
		{
			cout << symbol;
			i++;
		}
		cout << endl;
	}
}
//----------------------------------------------------
int main()
{
	char ans;
	char ans2;
	int size;
	char symbol;
	cout << "Do you want to draw a square? (y/n); ";
	cin >> ans;
	while (ans == 'Y' || 'y')
	{
		cout << "Enter the square size: ";
		cin >> size;
		cout << "The symbol % will be used. Do you want to enter a different symbol? (y/n): ";
		cin >> ans2;
		if (ans2 == 'N' || 'n')
		{
			for (int i = 0; i < size; i++)
			DrawSquare(size);
		}
		else
		{
			cout << "Enter the character: ";
			cin >> symbol;
			for (int i = 0; i < size; i++)
			DrawSquare(size,symbol);
		}
		cout << "Do you want to draw a square? (y/n): ";
		cin >> ans;
	}
	cout << "End of Program";
	return 0;
}
