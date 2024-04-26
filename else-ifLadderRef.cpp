//else-ifLadderRef Dan Mine

#include <iostream>
using namespace std;
int main ()
{
	int temp;
	cout << "Please enter a temperature: ";
	cin >> temp;
	/*
	if (temp <= 32)
		cout << "Freezing";
	else if (temp < 70)
		cout << "Cool";
	else if (temp < 90)
		cout << "Hot";
	else
		cout << "Very Hot";
	*/

	if (temp >= 90)
		cout << "Very Hot";
	else if (temp >= 70)
		cout << "Hot";
	else if (temp > 32)
		cout << "Cool";
	else
		cout << "Freezing";

	cout << endl << "End of program";
	return 0;
}
