//Computer Repair Dan Mine

#include <iostream>
using namespace std;
int main()
{
	string SpinAnswer;
	string BeepAnswer;

	cout << "Does it spin: ";
	cin >> SpinAnswer;

	cout << "Does it beep: ";
	cin >> BeepAnswer;

	if (SpinAnswer == "yes" && BeepAnswer == "yes")
		cout << "Contact tech support";
	else if (SpinAnswer == "no" && BeepAnswer == "yes")
		cout << "Check drive contacts";
	else if (SpinAnswer == "no" && BeepAnswer == "no")
		cout << "Bring computer to repair center";
	else
		cout << "Check the speaker contacts";

	return 0;
}
