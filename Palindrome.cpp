//Palindrome Dan Mine

#include <iostream>
#include <string>
using namespace std;
//------------------------------------------------
bool palindrome(string word)
{
	string letter1 = word.substr(0, 1);
	string letter2 = word.substr(word.length()-1,1);

	if(word.length() == 1 || 0)
		return true;

	if (letter1 == letter2)
	{
		string newWord = word.substr(1, word.length()-2);
		palindrome(newWord);
		return true;
	}
	else
		return false;

}
//------------------------------------------------
int main()
{
	string word = "test";
	bool isPalindrome = palindrome(word);

	if (isPalindrome == true)
		cout << word << endl << "True";
	else
		cout << word << endl << "False";

	return 0;
}
