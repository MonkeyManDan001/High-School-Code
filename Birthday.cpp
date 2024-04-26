//Birthday Dan Mine Period 4

#include <iostream>
using namespace std;
int main()
{
	const int BALLOON = 1;
	const double PIZZA = 11.50;
	const double SODA = 0.99;
	const double CAKE = 25.00;
	const double TAX = 0.07;
	int balloon;
	int pizza;
	int soda;
	int cake;

	cout << "Please enter how many balloons you are buying: ";
	cin >> balloon;
	cout << "Please enter how many pizzas you are buying: ";
	cin >> pizza;
	cout << "Please enter how many bottles of soda you are buying: ";
	cin >> soda;
	cout << "Please enter how many cakes you are buying: ";
	cin >> cake;

	double totalCost = (balloon*BALLOON)+(pizza*PIZZA)+(soda*SODA)+(cake*CAKE);

	cout << endl << "The price before tax is: " << totalCost << endl << endl;
	cout << "The tax is: " << totalCost*TAX << endl << endl;
	cout << "The price after tax is: " << (totalCost)+(totalCost*TAX);

	return 0;
}
/*
Please enter how many balloons you are buying: 25
Please enter how many pizzas you are buying: 10
Please enter how many bottles of soda you are buying: 10
Please enter how many cakes you are buying: 1

The price before tax is: 174.9

The tax is: 12.243

The price after tax is: 187.143
 */

/*
Please enter how many balloons you are buying: 15
Please enter how many pizzas you are buying: 7
Please enter how many bottles of soda you are buying: 5
Please enter how many cakes you are buying: 2

The price before tax is: 150.45

The tax is: 10.5315

The price after tax is: 160.981
 */
