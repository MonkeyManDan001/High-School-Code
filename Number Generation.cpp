//NumberGeneration Dan Mine

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
const int SENTINEL = 20;
//-------------------------------------------------------
void displayVector(const vector <int> vector)
{
	int size = vector.size();
	for (int i = 0; i < size; i++)
		cout << vector[i] << " ";
}
//-------------------------------------------------------
void loadVector(vector <int> &vector)
{
	int seed = time(0);
	srand(seed);

	int randomNum = rand() % 20 + 1;

	while (randomNum != SENTINEL)
	{
		vector.resize(vector.size()+1);
		vector[vector.size()-1] = randomNum;
		randomNum = rand() % 20 + 1;
	}
}
//-------------------------------------------------------
int main()
{
	vector<int> data;

	loadVector(data);

	cout << "It took " << data.size() << " numbers until a " << SENTINEL << " was generated. They are: " << endl;

	displayVector(data);

	return 0;
}
