//Password Dan Mine

#include <iostream>
using namespace std;
int main()
{
	string lastName;
	string birthday;

	cout << "Please enter your last name: ";
	cin >> lastName;

	cout << "Please enter your 6 digit bday: ";
	cin >> birthday;
	cout << endl;

	string password = lastName+birthday;

	cout << "Your password is: " << password;

	return 0;
}
