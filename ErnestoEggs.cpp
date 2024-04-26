//ErnestoEggs Dan Mine

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int eggs;
	int const DOZEN = 12;

	cout << "Enter the number of eggs: ";
	cin >> eggs;

	int numDozen = eggs/DOZEN;

	if (numDozen < 4)
	{
		cout << "Your cost is $0.50 per dozen or " << setprecision(2) << .50/DOZEN << " per egg." << endl;
		cout << "Your bill comes to $" << setprecision(2) << fixed << (numDozen*0.5)+(.5/DOZEN*(eggs%DOZEN));
	}
	else
	{
		if (numDozen < 6)
		{
			cout << "Your cost is $0.45 per dozen or " << setprecision(2) << .45/DOZEN << " per egg." << endl;
			cout << "Your bill comes to $" << setprecision(2) << fixed << (numDozen*0.45)+(.45/DOZEN*(eggs%DOZEN));
		}
		else
		{
			if (numDozen < 11)
			{
				cout << "Your cost is $0.40 per dozen or " << setprecision(2) << .4/DOZEN << " per egg." << endl;
				cout << "Your bill comes to $" << setprecision(2) << fixed << (numDozen*0.40)+(.4/DOZEN*(eggs%DOZEN));
			}
			else
			{
				if (numDozen >= 11)
				{
					cout << "Your cost is $0.35 per dozen or " << setprecision(2) << .35/DOZEN << " per egg." << endl;
					cout << "Your bill comes to $" << setprecision(2) << fixed << (numDozen*0.35)+(.35/DOZEN*(eggs%DOZEN));
				}
			}
		}
	}

	return 0;
}
