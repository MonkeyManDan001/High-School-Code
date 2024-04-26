//CandyBarIgnore

#include <iostream>
using namespace std;
int main()
{
    string name1, name2, name3;
    int bars1, bars2, bars3;

    cout << "Please enter the seller's last name: ";
    getline(cin, name1);
    cout << "Please enter # of candy bars sold by " << name1 << ": ";
    cin >> bars1;

    cout << "Please enter the seller's last name: ";
    cin >> name2;
    cin.ignore(100,'\n');
    cout << "Please enter # of candy bars sold by " << name2 << ": ";
    cin >> bars2;

    cin.ignore(100,'\n');

    cout << "Please enter the seller's last name: ";
    getline(cin,name3);
    cout << "Please enter # of candy bars sold by " << name3 << ": ";
    cin >> bars3;

    cout << endl << endl;
    cout << name1 << " sold " << bars1 << endl;
    cout << name2 << " sold " << bars2 << endl;
    cout << name3 << " sold " << bars3 << endl << endl;

    cout << "Total number of candy bars sold: " << bars1+bars2+bars3;

  return 0;
}
