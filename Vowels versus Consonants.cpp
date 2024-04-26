//Vowels versus Consonants Dan Mine

#include <iostream>
using namespace std;
int main()
{
	char letter;

	cout << "Please enter a letter: ";
	cin >> letter;

	if (letter == 'a' || letter == 'A')
		cout << "The letter is a vowel";
	else if (letter == 'e' || letter == 'E')
		cout << "The letter is a vowel";
	else if (letter == 'i' || letter == 'I')
		cout << "The letter is a vowel";
	else if (letter == 'o' || letter == 'O')
		cout << "The letter is a vowel";
	else if (letter == 'u' || letter == 'U')
		cout << "The letter is a vowel";
	else
		cout << "The letter is a consonant";

	return 0;
}
