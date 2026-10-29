#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    string message ="Not even";

    // INPUT
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // PROCESS & OUTPUT
    cout << "-------------------------" << endl;

    if (num1 % 2 == 0 && num2 % 2 == 0)
        {
        //cout << num1 << " is Even" << endl;
        // cout << num2 << " is Even" << endl;
        cout <<message<<"Even" << endl;

         }
        // else
         //{
           // cout << num1 << " is Odd" << endl;
           // cout << num2 << " is Odd" << endl;
        // }

    return 0;
}
