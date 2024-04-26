//MakeLineOneParam Dan Mine

#include <iostream>
using namespace std;
//---------------------------------------------------------
void DrawBar(int length)
{
	const char LENGTH = '*';
	while (length > 0)
	{
		cout << LENGTH;
		length--;
	}
}
//---------------------------------------------------------
int main()
{
	int length;
	cout << "Enter the length: ";
	cin >> length;
	DrawBar(length);
	return 0;
}
