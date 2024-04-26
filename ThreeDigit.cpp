//ThreeDigit Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int num = 123;

	cout << "The first digit is " << num/100 << endl;
	cout << "The second digit is " << (num/10)%10 << endl;
	cout << "The third digit is " << num%10 << endl;
	cout << "The sum of the digits is " << (num/100)+((num/10)%10)+(num%10);

	return 0;
}
