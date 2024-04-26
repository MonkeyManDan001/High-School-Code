//multiplyOneParameter Dan Mine

#include <iostream>
using namespace std;
//---------------------------------------------------------------
void multiply(int num)
{
	int multiple = 0;

	while (multiple <= 10)
	{
		cout << num << " times " << multiple << " is: " << num*multiple << endl;
		multiple++;
	}

}
//----------------------------------------------------------------
int main()
{
	int num;
	cout << "Please enter the times table you would like to see: ";
	cin >> num;
	cout << endl;
	multiply(num);

	return 0;
}
