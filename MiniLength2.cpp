//MiniLength2 Dan Mine

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word1;
	string word2;

	cout << "Enter the first word: ";
	getline(cin, word1);
	cout << "Enter the second word: ";
	getline(cin, word2);

	cout << "The length of " << word1 << " is: " << word1.length() << endl;
	cout << "The length of " << word2 << " is: " << word2.length();

	return 0;
}
