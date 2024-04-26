//Wholename Dan Mine

#include <iostream>
using namespace std;
int main()
{
	string firstName;
	string lastName;

	cout << "Enter your first name: ";
	getline (cin, firstName);

	cout << "Enter your last name: ";
	cin >> lastName;

	string fullName = lastName + ", " + firstName;

	cout << "Your name is " << fullName;


	return 0;
}
