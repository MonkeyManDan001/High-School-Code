//PI Dan Mine

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const double PI = 3.1415926;
	const int SPACE = 10;

	cout << setw(SPACE);
	cout << right;
	cout << setprecision(2);
	cout << PI;
	cout << endl;

	cout << setw(SPACE);
	cout << right;
	cout << setprecision(3);
	cout << PI;
	cout << endl;

	cout << setw(SPACE);
	cout << right;
	cout << setprecision(4);
	cout << PI;
	cout << endl;

	cout << setw(SPACE);
	cout << right;
	cout << setprecision(5);
	cout << PI;
	cout << endl;

	cout << setw(SPACE);
	cout << right;
	cout << setprecision(6);
	cout << PI;
	cout << endl;

	cout << setw(SPACE);
	cout << right;
	cout << setprecision(7);
	cout << PI;
	cout << endl;

	return 0;
}
