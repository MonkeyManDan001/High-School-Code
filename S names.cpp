//S names Dan Mine

#include <iostream>
#include <string>
using namespace std;
const int SIZE = 10;
const string SENTINEL = "q";
//-----------------------------------------------
void displayArray(const string names[], int num)
{
  for (int index = 0; index < num; index++)
    cout << "\t" << names[index] << endl;
}
//-----------------------------------------------
int loadArray(string names[])
{
  string name;
  int count = 0;

  for(int index = 0; index < SIZE; index++)
  {
    cout << "Please enter a name, q to quit: ";
    getline(cin, name);

    if (name != SENTINEL)
    {
      names[index] = name;
      count++;
    }
    else
      index = SIZE;
  }
  return count;
}
//-----------------------------------------------
int loadSnames(const string names [], int num, string Snames[])
{
  int counter = 0;
  for (int index = 0; index < num; index++)
  {
    if (names[index].substr(0,1) == "S")
    {
      Snames[counter] = names[index];
      counter++;
    }
  }
  return counter;
}
//-----------------------------------------------
int main()
{
  string names[SIZE];
  string Snames[SIZE];

  int num = loadArray(names);

  cout << endl << "There are a total of " << num << " names. They are: " << endl;

  displayArray(names, num);

  int num2 = loadSnames(names, num, Snames);

  cout << endl << "There are " << num2 << " names beginning with S. They are: " << endl;

  displayArray(Snames, num2);

  return 0;
}
