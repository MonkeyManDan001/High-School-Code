//MineGymRental Dan Mine
/*
Toms River owns a gym that is rented to Toms River sports teams.  The town requires a weekly rental report that will display the following:

the team
the number of minutes the team rented the gym in 1 week
the total number of minutes the gym was rented out for all teams
the current balance (i.e. the current funds in the budget used to pay for gym use.)
the charges incurred before tax
the charges incurred after tax
the new balance of the funds.
the breakdown of the new balance in dollars, quarters, dimes, nickels, and pennies.

 */

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//INPUT PROMPT: asks the user for the sports and rental minutes
	string sport1, sport2, sport3;
	int minutes1, minutes2, minutes3;
	const int SPACE = 20;

	cout << "Please enter sport 1: ";
	getline(cin,sport1);
	cout << "Please enter rental minutes for " << sport1 << ": ";
	cin >> minutes1;
	cout << endl;

	cout << "Please enter sport 2: ";
	cin.ignore(100,'\n');
	getline(cin,sport2);
	cout << "Please enter the rental minutes for " << sport2 << ": ";
	cin >> minutes2;
	cout << endl;

	cout << "Please enter sport 3: ";
	cin.ignore(100,'\n');
	getline(cin,sport3);
	cout << "Please enter the rental minutes for " << sport3 << ": ";
	cin >> minutes3;
	cout << endl;

	//TABLE: the table that includes the sports, rental time, and total rental time
	cout << "\tToms River Weekly Gym Rental Report";
	cout << endl << endl;
	cout << left;
	cout << "Sport";
	cout << right;
	cout << setw(SPACE+20) << "Gym Rental (Minutes)";
	cout << endl << "-------------------------------------------------" << endl;

	cout << left;
	cout << sport1;
	cout << right;
	cout << setw(SPACE+8) << minutes1;
	cout << endl;

	cout << left;
	cout << sport2;
	cout << right;
	cout << setw(SPACE+14) << minutes2;
	cout << endl;

	cout << left;
	cout << sport3;
	cout << right;
	cout << setw(SPACE+7) << minutes3;
	cout << endl << endl;

	int totalTime = minutes1+minutes2+minutes3;
	int digit1 = totalTime/60;
	int digit2 = totalTime%60/10;
	int digit3 = totalTime%100;
	int digit4 = digit3%10;

	cout << "Total Rental Time: " << digit1 << ":" << digit2 << digit4 << endl;
	cout << "-------------------------------------------------" << endl;

	//TAX: takes the current balance, subtracts the tax, and gives the user the charge after tax
	const double TAX = 0.07;
	const double RENTALCOST = 20.99;
	double balance = 8200.00;
	double balanceBeforeTax = totalTime*RENTALCOST;
	double balanceAfterTax= (balanceBeforeTax*TAX)+balanceBeforeTax;

	cout << "Current Balance: " << setprecision(2) << fixed << balance << endl << endl;
	cout << "Charge Before Tax: " << balanceBeforeTax << endl << endl;
	cout << "Charge After Tax: " << balanceAfterTax << endl;
	cout << "-------------------------------------------------" << endl;

	//CHANGE: figures out the new balance and calculates the change needed to equal that amount
	double newBalance = balance-balanceAfterTax;
	const int DOLLARS = 1;
	const double QUARTERS = .25;
	const double DIMES = .10;
	const double NICKELS = .05;
	const double PENNIES = .01;

	int dollars = newBalance/DOLLARS;
	int quarters = (newBalance-dollars)/QUARTERS;
	int dimes = ((newBalance-dollars)-(quarters*QUARTERS))/DIMES;
	int nickels = ((newBalance-dollars)-(quarters*QUARTERS)-(dimes*DIMES))/NICKELS;
	int pennies = ((newBalance-dollars)-(quarters*QUARTERS)-(dimes*DIMES)-(nickels*NICKELS))/PENNIES;

	cout << "New Balance: " << newBalance << endl << endl;

	cout << "Dollars: ";
	cout << right << setw(SPACE-10) << dollars << endl;
	cout << "Quarters: ";
	cout << right << setw(SPACE-11) << quarters << endl;
	cout << "Dimes: ";
	cout << right << setw(SPACE-8) << dimes << endl;
	cout << "Nickels: ";
	cout << right << setw(SPACE-10) << nickels << endl;
	cout << "Pennies: ";
	cout << right << setw(SPACE-10) << pennies;

	return 0;
}
/*
Please enter sport 1: Girls Soccer
Please enter rental minutes for Girls Soccer: 132

Please enter sport 2: Tennis
Please enter the rental minutes for Tennis: 64

Please enter sport 3: Cross Country
Please enter the rental minutes for Cross Country: 166

	Toms River Weekly Gym Rental Report

Sport                    Gym Rental (Minutes)
-------------------------------------------------
Girls Soccer                         132
Tennis                                64
Cross Country                        166

Total Rental Time: 6:02
-------------------------------------------------
Current Balance: 8200.00

Charge Before Tax: 7598.38

Charge After Tax: 8130.27
-------------------------------------------------
New Balance: 69.73

Dollars:         69
Quarters:         2
Dimes:            2
Nickels:          0
Pennies:          3
 */
