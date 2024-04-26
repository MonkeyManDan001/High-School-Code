//FahrenheitCelsius Dan Mine

#include <iostream>
using namespace std;
int main()
{
	int fahrenheit;

	cout << "Enter the temperature in Fahrenheit: ";
	cin >> fahrenheit;

	cout << "The temperature in Celcius is " << (fahrenheit-32)*5/9 << " degrees.";

	return 0;
}
