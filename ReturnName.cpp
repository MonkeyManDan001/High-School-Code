//ReturnName Dan Mine

#include <iostream>
#include <string>
using namespace std;
//--------------------------------------------------------
string ConvertToFirstLast(string name)
{
	int index = name.find(",");
	int index2 = name.length();

	string firstName = name.substr(index + 2, index2);
	string lastName = name.substr(0, index);
	string fullName = firstName + " " + lastName;

	return fullName;
}
//--------------------------------------------------------
int main()
{
	string name;

	cout << "Enter a name: ";
	getline(cin, name);

	string Name = ConvertToFirstLast(name);

	cout << Name;

	return 0;
}
