//Vector"S"names Dan Mine

#include <iostream>
#include <vector>
#include <string>
using namespace std;
string SENTINEL = "q";
//-------------------------------------------------------
void displayVector(vector<string> &names)
{
	int size = names.size();
	for (int i = 0; i < size; i++)
		cout << "\t" << names[i] << endl;
}
//-------------------------------------------------------
void loadVector(vector<string> &names)
{
	string name;

	cout << "Please enter a name, 'q' to quit: ";
	getline(cin,name);

	while (name != SENTINEL)
	{
		names.resize(names.size() + 1);
		names[names.size()-1] = name;
		cout << "Please enter a name, 'q' to quit: ";
		getline(cin,name);
	}
}
//-------------------------------------------------------
void loadSnames(const vector<string> names, vector<string> &Snames)
{
	int size = names.size();
	for (int i = 0; i < size; i++)
	{
		if (names[i].substr(0,1) == "S")
		{
			Snames.resize(Snames.size() + 1);
			Snames[Snames.size()-1] = names[i];
		}
	}
}
//-------------------------------------------------------
int main()
{
	vector<string> names;
	vector<string> Snames;

	loadVector(names);

	cout << endl << "There are a total of " << names.size() << " names. They are: " << endl;

	displayVector(names);
	loadSnames(names, Snames);

	cout << endl << "There are " << Snames.size() << " names beginning with S. They are: " << endl;

	displayVector(Snames);

	return 0;
}
