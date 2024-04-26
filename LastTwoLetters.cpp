//LastTwoLetters Dan Mine

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	int length;

	cout << "Please enter a word: ";
	getline(cin,word);

	length = word.length();

	cout << "Last 2 letters: " << word.substr(length-2, length);

	return 0;
}
