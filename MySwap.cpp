//MySwap Dan Mine

#include <iostream>
using namespace std;
//-------------------------------------------------------
void MySwap(int &num1,int &num2)
{
	int x = num1;
	num1 = num2;
	num2 = x;
}
//-------------------------------------------------------
int main()
{
	int num1, num2;
	cout << "Please enter the first number: ";
	cin >> num1;
	cout << "Please enter the second number: ";
	cin >> num2;
	cout << "Before calling swap, x = " << num1 << " and y = " << num2 << endl;
	MySwap(num1, num2);
	cout << "After calling swap, x = " << num1 << " and y = " << num2;
	return 0;
}
