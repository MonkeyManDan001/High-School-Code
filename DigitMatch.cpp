//DigitMatch Dan Mine

#include <iostream>
using namespace std;
//------------------------------------------------------
bool isMatch(int num)
{
	int digit1 = num % 10;
	int digit2 = num / 100;

	if (digit1 == digit2)
		return true;
	else
		return false;
}
//------------------------------------------------------
int main()
{
	int num;
	bool same;
	cout << "Please enter a 3 digit number: ";
	cin >> num;
	same = isMatch(num);
	if (same == true)
		cout << "The digits match";
	else
		cout << "The digits do not match";
	return 0;
}
