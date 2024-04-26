//VectorReference Dan Mine

#include <iostream>
#include <vector>
#include <string>
using namespace std;
//--------------------------------------------------------------
//NOTE: This function receives the vector as a const reference
//parameter since it's NOT modifying the contents

void display(const vector <int> &myVector)
{
	for (int i = 0; i < myVector.size(); i++)
		cout << myVector[i] << " ";
	cout << endl;
}
//--------------------------------------------------------------
//NOTE: This function receives a vector as a reference parameter
//since it is modifying the contents

void loadVector(vector <int> &theVector)
{
	int num;
	//load 5 integers
	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter a number: ";
		cin >> num;
		//Create the slot then fill it - DYNAMIC MEMORY ALLOCATION
		theVector.resize(theVector.size()+1);
		theVector [theVector.size()-1] = num;
	}
}
//--------------------------------------------------------------
int main()
{
	vector<int> data;

	cout << "The contents of the vector are: " << endl;
	display(data);

	loadVector(data);
	cout << "The contents of the vector after loading are: " << endl;
	display(data);

	data.push_back(500);
	cout << "The contents of the vector after push_back: " << endl;
	display(data);

	data.pop_back();
	cout << "The contents of the vector after pop_back: " << endl;
	display(data);

	return 0;
}
