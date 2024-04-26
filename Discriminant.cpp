//Discriminant Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int numA;
	int numB;
	int numC;
	cout << "Please enter a value for a: ";
	cin >> numA;
	cout << "Please enter a value for b: ";
	cin >> numB;
	cout << "Please enter a value for c: ";
	cin >> numC;

	int dis = (numB*numB)-(4*numA*numC);

	if (dis < 0)
		cout << "No roots";
	else if (dis == 0)
		cout << "One root";
	else
		cout << "Two roots";

	return 0;
}
