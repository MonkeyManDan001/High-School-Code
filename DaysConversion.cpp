//DaysConversion Dan Mine

#include <iostream>
using namespace std;
//----------------------------------------------
void DaysToHrsMins(int days, int &hours, int &mins)
{
	hours = days * 24;
	mins = hours * 60;
}
//----------------------------------------------
int main()
{
	int hours;
	int mins;
	for (int days = 1; days <= 10; days++)
	{
		DaysToHrsMins(days, hours, mins);
		cout << days << " day(s) is " << hours << " hours or " << mins << " minutes" << endl;
	}
	return 0;
}
