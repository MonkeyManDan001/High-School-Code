//PrimeNumber Dan Mine

#include <iostream>
using namespace std;
//-----------------------------------------------------
int isPrime(int count)
{
	int div = 2;

	while(div <= 100)
	{
		if (count / div != 1)
			return true;
		else
			return false;
		div++;
	}
}
//-----------------------------------------------------
int main()
{
	int count = 2;
	int i = 0;

	while (count <= 100)
	{
		i += isPrime(count);
		count++;
	}
	cout << "There are " << i << " prime numbers between 2 and 100";
	return 0;
}
