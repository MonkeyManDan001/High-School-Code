//Reduce Dan Mine

#include <iostream>
using namespace std;
//--------------------------------------------------------
void Reduce(int &num, int &denom)
{
	int div = num;
	while(div > 1)
	{
		if(num % div == 0 && denom % div == 0)
		{
			num = num / div;
			denom = denom / div;
		}
		else
			div--;
	}
}
//--------------------------------------------------------
int main()
{
	int num;
	int denom;
	cout << "Enter the numerator: ";
	cin >> num;
	cout << "Enter the denominator: ";
	cin >> denom;
	Reduce(num,denom);
	cout << "The reduced fraction is " << num << "/" << denom;
	return 0;
}
