//ReverseString Dan Mine

#include <iostream>
#include <string>
using namespace std;
//--------------------------------------
void RevString(string s)
{
	int length = s.length();

	if(length > 0)
	{
		string index = s.substr(1,length-1);
		string index2 = s.substr(0,1);
		RevString(index);
		cout << index2;
	}
}
//--------------------------------------
int main()
{
	string s = "Mark Twain";
	RevString(s);

	return 0;
}
