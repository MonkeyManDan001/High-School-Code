//multiplyMultiParameters Dan Mine

#include <iostream>
using namespace std;
//--------------------------------------------------------
void multiply(int tt, int start, int end)
{
	while (start <= end)
	{
		cout << tt << " times " << start << " is: " << start*tt << endl;
		start++;
	}
}
//--------------------------------------------------------
int main()
{
	int tt,start,end;
	cout << "Please enter the times table you would like to see: ";
	cin >> tt;
	cout << "Please enter a start value: ";
	cin >> start;
	cout << "Please enter the end value: ";
	cin >> end;
	multiply(tt,start,end);
}
