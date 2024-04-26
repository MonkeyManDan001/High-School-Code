//findReference Dan Mine

#include <iostream>
#include <string>
using namespace std;
int const NOTFOUND = -1;
int main()
{
	string state = "Mississippi";

	int index = state.find("s");

	cout << index << endl;

	index = state.find("iss");

	cout << index << endl;

	index = state.find ("z");

	if (index == NOTFOUND)
		cout << "z is not found";

	return 0;
}
