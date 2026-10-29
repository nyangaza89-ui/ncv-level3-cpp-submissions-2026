#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    char gender;
    string discription; // keep your spelling so GitHub matches

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter gender (M/F): ";
    cin >> gender;

    switch (gender)
    {
        case 'F':
        case 'f':
            discription = "Female";
            break;

        case 'M':
        case 'm':
            discription = "Male";
            break;

        default:
            discription = "Invalid";
            break; // you missed this break
    }

    // This must be OUTSIDE switch
    cout << "Hello " << name << " you are : " << discription << endl;

    return 0; // you had return ;
}
