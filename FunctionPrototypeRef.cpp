//FunctionPrototypeRef Dan Mine

#include <iostream>
using namespace std;

//Function Prototypes. This list informs the compiler about all of my functions.
void functionA();
void functionB();
//--------------------------------------------------------------------------------------
void functionA()
{
	cout << "Start of functionA" << endl;
	functionB();	//prototypes used: I DON'T need to look up to find code.
	cout << "End of functionA" << endl;
}
//--------------------------------------------------------------------------------------
void functionB()
{
	cout << "Start of functionB" << endl;
	cout << "End of functionB" << endl;
}
//--------------------------------------------------------------------------------------
int main()
{
	cout << "Start of int main" << endl;
	functionA();
	cout << "End of int main" << endl;
}
