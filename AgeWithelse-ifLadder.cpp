//AgeWithelse-ifLadder Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter an age: ";
	cin >> age;

	if (age < 1)
		cout << "infant";
	else if (age < 5)
		cout << "toddler";
	else if (age < 10)
		cout << "child";
	else if (age < 13)
		cout << "preteen";
	else if (age < 20)
		cout << "teen";
	else
		cout << "adult";

	return 0;
}
