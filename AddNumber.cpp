//AddNumber Dan Mine

#include <iostream>
using namespace std;
//--------------------------------------------------
int AddOne(int num)
{
	return num + 1;
}
//--------------------------------------------------
int main()
{
	int num;
	cout << "Please enter a number: ";
	cin >> num;
	num = AddOne(num);
	cout << "After calling AddOne, the number is now: " << num;
	return 0;
}
