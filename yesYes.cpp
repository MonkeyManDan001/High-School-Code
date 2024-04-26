//yesYes Dan Mine

#include <iostream>
using namespace std;
int main()
{
	string answer;

		do
		{
			cout << "Should I stay in do-while loop? (yes/YES/n): ";
			cin >> answer;
		} while (answer == "yes" || answer == "YES");

		cout << "Out of do while loop. Good bye!" << endl;

	return 0;
}
