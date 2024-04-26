//AgeWithelse-ifLadder and Logical Operators Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int age;

	cout << "Please enter an age: ";
	cin >> age;

	if (age < 1)
		cout << "infant";
	else if (age >=1 && age < 5)
		cout << "toddler";
	else if (age >=5 && age < 10)
		cout << "child";
	else if (age >= 10 && age < 13)
		cout << "preteen";
	else if (age >= 13 && age < 20)
		cout << "teen";
	else if (age >=20)
		cout << "adult";

	return 0;
}
