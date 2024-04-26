//ReversedAge Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int age;

	cout << "Please enter an age: ";
	cin >> age;

	if (age >= 20)
	{
		cout << "adult";
	}
	else
	{
		if (age >= 13)
		{
			cout << "teen";
		}
		else
		{
			if (age >= 10)
			{
				cout << "preteen";
			}
			else
			{
				if (age >= 5)
				{
					cout << "child";
				}
				else
				{
					if (age >=1)
					{
						cout << "toddler";
					}
					else
					{
						cout << "infant";
					}
				}
			}
		}
	}

	return 0;
}
