//countVowelConsonants Dan Mine

#include <iostream>
#include <string>
using namespace std;
const string VOWELS = "AEIOUaeiou";
const string CONS = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
//--------------------------------------------
void countVowelsCons(string sentence, int &vowels, int &cons)
{
	int length = sentence.length();
	vowels = 0;
	cons = 0;

	for(int i = 0; i < length; i++)
  {
    string letter = sentence.substr(i,1);

    int index = VOWELS.find(letter);
    int index2 = CONS.find(letter);

    if(index >= 0)
      vowels++;

    if (index2 >= 0)
      cons++;
  }
}
//--------------------------------------------
int main()
{
	string sentence;
	int vowels;
	int cons;

	cout << "Please enter a sentence: ";
	getline(cin,sentence);

	countVowelsCons(sentence, vowels, cons);

	cout << endl << "Number of Vowels: " << vowels;
	cout << "\t Number of Consonants: " << cons;

	return 0;
}
