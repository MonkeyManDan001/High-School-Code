//hasRepeats Dan Mine

#include <iostream>
#include <string>
using namespace std;
//--------------------------------------------------
bool hasRepeats(string word)
{
	int length = word.length();

	for (int i = 0; i < length; i++)
	{
		string letter = word.substr(i,1);
		for (int count = i + 1; count < length; count++)
		{
			string letter2 = word.substr(count,1);
			if(letter == letter2)
				return true;
		}
	}
	return false;
}
//--------------------------------------------------
int main()
{
	string word;

	cout << "Please enter a string: ";
	getline(cin, word);

	bool isRepeat = hasRepeats(word);

	if (isRepeat == true)
		cout << "The string has repeated letters";
	else
		cout << "The string has NO repeated letters";

	return 0;
}
