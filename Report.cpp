//Report Dan Mine

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string name1, name2, name3;
	string class1, class2, class3;
	const int LEFTALIGN = 20;
	const int RIGHTALIGN = 25;

	cout << "Please enter a student name: ";
	getline(cin, name1);
	cout << "Please enter period 1 for " << name1 << ": ";
	getline(cin, class1);

	cout << endl;
	cout << "Please enter a student name: ";
	getline(cin, name2);
	cout << "Please enter period 1 for " << name2 << ": ";
	getline(cin, class2);

	cout << endl;
	cout << "Please enter a student name: ";
	getline(cin,name3);
	cout << "Please enter period 1 for " << name3 << ": ";
	getline(cin,class3);

	cout << endl;
	cout << "Student Report:";
	cout << endl << endl;



	cout << left;
	cout << setw(LEFTALIGN) << name1;
	cout << right;
	cout << setw(RIGHTALIGN) << class1;
	cout << endl;

	cout << left;
	cout << setw(LEFTALIGN) << name2;
	cout << right;
	cout << setw(RIGHTALIGN) << class2;
	cout << endl;

	cout << left;
	cout << setw(LEFTALIGN) << name3;
	cout << right;
	cout << setw(RIGHTALIGN) << class3;
	cout << endl;

	return 0;
}
