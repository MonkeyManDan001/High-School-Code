//toUpper Dan Mine

#include <iostream>
#include <string>
using namespace std;
string UPPER = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string LOWER = "abcdefghijklmnopqrstuvwxyz";
int NOTFOUND = -1;
//--------------------------------------------------------
  string toUpper(string word)
  {
	  int length = word.length();
	  string upLetter = "";

	  for (int i = 0; i < length; i++)
	  {
		  string letter = word.substr(i,1);
		  int index = LOWER.find(letter);

		  if (index == NOTFOUND)
		  {
			  upLetter += letter;
		  }
		  else
		  {
			  letter = UPPER.substr(index,1);
			  upLetter += letter;
		  }
	  }
	  return upLetter;
}
//--------------------------------------------------------
int main()
{
	string word;

	cout << "Please enter a string: ";
	getline(cin, word);

	string upper = toUpper(word);

	cout << upper;

	return 0;
}


