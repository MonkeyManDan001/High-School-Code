//Candidates Dan Mine

#include <iostream>
#include <vector>
using namespace std;
const string SENTINEL = ".";
//--------------------------------------------------------------------
void displayVector(vector<string> &names, vector<int> &votes)
{
	int size = names.size();
	for (int i = 0; i < size; i++)
	{
		cout << names[i] << "\t\t" << votes[i] << endl;
	}
}
//--------------------------------------------------------------------
void loadCandidates(vector<string> &names, vector<int> &votes)
{
	string name;
	int vote;

	while (name != SENTINEL)
	{
		cout << "Enter a name:\t\t";
		getline(cin,name);

		if (name != SENTINEL)
		{
			cout << "Enter a vote:\t\t";
			cin >> vote;

			cin.ignore(100, '\n');

			names.resize(names.size() + 1);
			names[names.size() - 1] = name;

			votes.resize(votes.size() + 1);
			votes[votes.size() - 1] = vote;
		}
	}
}
//--------------------------------------------------------------------
int main()
{
	vector<string> names;
	vector<int> votes;

	loadCandidates(names, votes);

	cout << endl << "Results:" << endl << endl;

	displayVector(names, votes);

	return 0;
}
