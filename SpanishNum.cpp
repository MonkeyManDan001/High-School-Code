//SpanishNum Dan Mine

#include <iostream>
using namespace std;
//--------------------------------------------------------
void SpanishNum(int num)
{
	if (num == 1)
		cout << "1 uno";
	else if (num == 2)
			cout << "2 dos";
	else if (num == 3)
			cout << "3 tres";
	else if (num == 4)
			cout << "4 cuatro";
	else if (num == 5)
			cout << "5 cinco";
}
//--------------------------------------------------------
int main()
{
	int num = 1;
	for (num; num <= 5; num++)
	{
		SpanishNum(num);
		cout << endl;
	}
	return 0;
}
