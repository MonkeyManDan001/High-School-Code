//voidFunctionRef Dan Mine

#include <iostream>
using namespace std;
//-------------------------------------------------------------------
void DaysToHours()
{
	int Days, Hours;
	cout << "Enter the number of days: ";
	cin >> Days;
	Hours = Days*24;
	cout << "The # of hours in " << Days << " days is : " << Hours;
}
//-------------------------------------------------------------------
int main()
{
	DaysToHours();
	return 0;
}
