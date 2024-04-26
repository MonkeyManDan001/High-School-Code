//doWhileRef Dan Mine

#include <iostream>
using namespace std;
int main()
{
	char answer;

	do
	{
		cout << "Should I stay in do-while loop? (y/n): ";
		cin >> answer;
	} while (answer == 'y');

	cout << "Out of do while loop. Good bye!" << endl;

	return 0;
}
