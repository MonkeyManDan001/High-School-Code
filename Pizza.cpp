//Pizza Dan Mine

#include <iostream>
using namespace std;
int main()
{
	const double PIZZA = 1.20;
	int size;

	cout << "Enter the size of the pizza: ";
	cin >> size;

	cout << "The cost is $" << 0.05*size*size+PIZZA;

	return 0;
}
