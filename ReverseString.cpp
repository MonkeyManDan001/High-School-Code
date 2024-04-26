//ReverseString Dan Mine

#include <iostream>
#include <string>
using namespace std;
//---------------------------------------------------
string Reverse(string word)
{
	int length = word.length();
	string reverse = "";
	for (int i = 0; i < length; length--)
		reverse += word.substr(length - 1, 1);
	return reverse;
}
//---------------------------------------------------
int main()
{
	string word;

	cout << "Please enter a word: ";
	getline(cin, word);

	string reverse = Reverse(word);

	cout << "The reversed word is: " << reverse;

	return 0;
}
