//TimesTable Dan Mine

#include <iostream>
using namespace std;
//----------------------------------------------------------------
void multiply()
{
	int num;
	int multiple = 0;

	cout << "Please enter the times table you would like to see: ";
	cin >> num;
	cout << endl;

	while (multiple <= 10)
	{
		cout << num << " times " << multiple << " is: " << num*multiple << endl;
		multiple++;
	}

}
//----------------------------------------------------------------
int main()
{
	multiply();
	return 0;
}
