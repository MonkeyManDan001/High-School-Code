//NumDigits Dan Mine

#include <iostream>
using namespace std;
//---------------------------------------------------
int NumDigits(int num)
{
	if (num >= 10)
		return 1 + NumDigits(num / 10);
	else
		return 1;
}
//---------------------------------------------------
int main()
{
	int num = 10;
	int count = NumDigits(num);
	cout << count;

	return 0;
}
