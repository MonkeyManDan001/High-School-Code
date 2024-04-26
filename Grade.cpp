//Grade Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int grade;
	string name;

	cout << "Please enter a name: ";
	getline(cin,name);
	cout << "Please enter a grade: ";
	cin >> grade;

	if (grade >= 97)
		cout << name << " has an A+";
	else if (grade >= 90)
		cout << name << " has an A";
	else if (grade >= 87)
		cout << name << " has a B+";
	else if (grade >= 80)
		cout << name << " has a B";
	else if (grade >= 77)
		cout << name << " has a C+";
	else if (grade >= 70)
		cout << name << " has a C";
	else if (grade >= 65)
		cout << name << " has a D";
	else
		cout << name << " has a F";

	return 0;
}
