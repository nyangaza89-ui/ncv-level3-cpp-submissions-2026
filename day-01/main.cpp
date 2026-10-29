#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    char gender;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter gender (M/F): ";
    cin >> gender;

    if (gender == 'M' || gender == 'm')
        cout << name << " is Male" << endl;
    else
        cout << name << " is Female" << endl;

    return 0;
}
