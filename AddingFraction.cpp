//AddingFraction Dan Mine

#include <iostream>
using namespace std;
//-----------------------------------------------------
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
//-----------------------------------------------------
void ReadFraction(int &num, int &denom)
{
	cout << "Enter the numerator: ";
	cin >> num;
	cout << "Enter the denominator: ";
	cin >> denom;
	if(num > 0 && denom > 0)
		Reduce(num,denom);
	else
	{
		while(num <= 0 && denom <= 0)
		{
			cout << "Invalid Number" << endl;
			ReadFraction(num,denom);
		}
	}
}
//-----------------------------------------------------
void AddFraction(int n1, int n2, int &n3, int d1, int d2, int &d3)
{
	n3 = (n1*d2)+(n2*d1);
	d3 = (d1*d2);
	Reduce(n3,d3);
}
//-----------------------------------------------------
void DisplayFraction (int n3, int d3)
{
	cout << n3 << "/" << d3;
}
//-----------------------------------------------------
int main()
{
	int n1, n2, n3, n4, d1, d2, d3, d4;
	ReadFraction(n1, d1);
	ReadFraction(n2, d2);
	ReadFraction(n4, d4);
	AddFraction(n1, n2, n3, d1, d2, d3);
	AddFraction(n3, n4, n1, d3, d4, d1);
	DisplayFraction(n1, d1);
	return 0;
}
