//Computer Dan Mine

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int SPACE = 10;
	const string COMPUTER = "Computer";

	cout << setw(SPACE) << COMPUTER << endl;
	cout << setw(SPACE+2) << COMPUTER << endl;
	cout << setw(SPACE+4) << COMPUTER << endl;
	cout << setw(SPACE+6) << COMPUTER << endl;
	cout << setw(SPACE+4) << COMPUTER << endl;
	cout << setw(SPACE+2) << COMPUTER << endl;
	cout << setw(SPACE) << COMPUTER << endl;


	return 0;
}
