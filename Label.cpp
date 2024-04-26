//Label Dan Mine

#include <iostream>
using namespace std;
int main()
{
	string firstName;
	string lastName;
	string streetAddress;
	string town;
	string zip;
	const string STATE = "NJ";

	cout << "Please enter the first name: ";
	getline (cin, firstName);

	cout << "Please enter the last name: ";
	getline (cin, lastName);

	cout << "Please enter the street address: ";
	getline (cin, streetAddress);

	cout << "Please enter the town: ";
	getline (cin, town);

	cout << "Please enter the zip code: ";
	cin >> zip;
	cout << endl;

	cout << firstName + " " + lastName << endl;
	cout << streetAddress << endl;
	cout << town + ", " + STATE + " " + zip;

	return 0;
}
