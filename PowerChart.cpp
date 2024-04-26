//PowerChart Dan Mine

#include <iostream>
using namespace std;
//------------------------------------------------
int powerOf(int base, int exp)
{
	int ans = 1;

	if (exp == 0)
		return ans;
	else
	{
		while (exp > 0)
		{
			ans *= base;
			exp--;
		}
	} return ans;
}
//------------------------------------------------
int main()
{
	int base, exp, ans;

	cout << "Please enter a base: ";
	cin >> base;
	cout << "Please enter an exponent: ";
	cin >> exp;

	int i = 1;

	while (i <= exp)
	{
		ans = powerOf(base,i);
		cout << base << " to the " << i << " is " << ans << endl;
		i++;
	}
	return 0;
}
