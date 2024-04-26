//DeleteWords Dan Mine

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
const int NUMWORDS = 10;
const string WORDS[NUMWORDS] = {"happy", "dog", "yield", "friend", "programming", "tracing", "movies", "chips", "teacher", "beach" };
const int MINWORDS = 3; //CHANGE TO 20 WHEN DONE**********
const int MAXWORDS = 7; //CHANGE TO 30 WHEN DONE**********
//--------------------------------------------------------
void displayVector(vector<string> words)
{
	int size = words.size();
	for (int i = 0; i < size; i++)
		cout << words[i] << " ";
}
//--------------------------------------------------------
void deleteFromVector()
{

}
//--------------------------------------------------------
void loadWords(vector<string> &words)
{
	int seed = time(0);
	srand(seed);

	int wordCount = rand() % (MAXWORDS - MINWORDS + 1) + MINWORDS;

	for (int i = 0; i <= wordCount; i++) //may be out of bounds
		words[i] = WORDS[rand() % NUMWORDS + 1];
}
//--------------------------------------------------------
int main()
{
	vector<string> words;

	loadWords(words);

	cout << "YOU HAVE CHOSEN " << words.size() << " WORDS:";

	displayVector(words);

	return 0;
}
