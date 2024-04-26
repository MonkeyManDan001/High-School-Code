//MakeLineMultiParam Dan Mine

#include <iostream>
using namespace std;
//---------------------------------------------------------
void DrawBar(int length, string character)
{
	while (length > 0)
	{
		cout << character;
		length--;
	}
}
//---------------------------------------------------------
int main()
{
	int length;
	string character;
	cout << "Enter the length: ";
	cin >> length;
	cout << "Enter a character: ";
	cin >> character;
	DrawBar(length, character);
	return 0;
}
