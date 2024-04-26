//Lo-Hi Dan Mine

#include <iostream>
using namespace std;
//---------------------------------------------
void MySwap(int &num1,int &num2)
{
	int x = num1;
	num1 = num2;
	num2 = x;
}
//---------------------------------------------
void SetLoHi(int &num1, int &num2, int &num3, int &num4)
{
	if (num1 > num2)
		MySwap(num1,num2);
	if (num1 > num3)
		MySwap(num1,num3);
	if (num1 > num4)
		MySwap(num1,num4);
	if (num2 > num3)
		MySwap(num2,num3);
	if (num2 > num4)
		MySwap(num2,num4);
	if (num3 > num4)
		MySwap(num3,num4);
}
//---------------------------------------------
int main()
{
	int num1;
	int num2;
	int num3;
	int num4;
	cout << "Enter the first integer: ";
	cin >> num1;
	cout << "Enter the second integer: ";
	cin >> num2;
	cout << "Enter the third integer: ";
	cin >> num3;
	cout << "Enter the fourth integer: ";
	cin >> num4;
	SetLoHi(num1,num2,num3,num4);
	cout << "The low-high order is: " << num1 << " " << num2 << " " << num3 << " " << num4;
	return 0;
}
