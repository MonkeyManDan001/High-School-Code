//MiniLength1 Dan Mine

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	cout << "Please enter a word: ";
	getline(cin, word);
	cout << "The length of " << word << " is: " << word.length();
	return 0;
}
