//findAndReplace Dan Mine

#include <iostream>
#include <string>
using namespace std;
//--------------------------------------------------
void findAndReplace(string &sentence, string replace, string symbol)
{
	int length = sentence.length();
	string newSentence = "";

	for (int i = 0; i < length; i++)
	{
      string letter = sentence.substr(i,1);

      if(letter == replace)
        newSentence += symbol;
      else
        newSentence += letter;
    }
	sentence = newSentence;
}
//--------------------------------------------------
int main()
{
  string sentence;
  string toReplace;
  string symbol;

  cout << "Please enter a sentence: ";
  getline(cin, sentence);

  cout << endl << "Enter the character you are replacing: ";
  getline(cin, toReplace);

  cout << "Enter the character to replace \"" << toReplace << "\" with: ";
  getline(cin, symbol);

  findAndReplace(sentence, toReplace, symbol);

  cout << endl << "The new sentence is: " << sentence;

  return 0;
}
