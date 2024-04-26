//stringTraversal Dan Mine

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	int i;

	cout << "Please enter a word: ";
	getline(cin,word);

	int length = word.length();

	for (i = 0; i < length; i++)
		cout << word.substr(length-1-i, 1) << endl;

	cout << "The number of times through the loop: " << i;

	return 0;
}
