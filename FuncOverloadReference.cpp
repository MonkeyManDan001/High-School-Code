//FuncOverloadReference Dan Mine

#include <iostream>
using namespace std;
//---------------------------------------------------
void DrawBar(int Number)
{
	const char VALUE = '*';
	for (int i = 0; i < Number; i++)
		cout << VALUE;
}
//---------------------------------------------------
void DrawBar(int Length, char Character)
{
	for (int i = 0; i < Length; i++)
		cout << Character;
}
//---------------------------------------------------
int main()
{
	DrawBar(40);
	cout << endl;
	DrawBar(10, '$');
	cout << endl;
	DrawBar(20);
	return 0;
}
