#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num, sum = 0, average;

    // FOR LOOP to enter 5 numbers
    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num;

        // VALIDATION - avoid -ve number
        while (num < 0)
        {
            cout << "Negative not allowed! Enter number " << i << " again: ";
            cin >> num;
        }

        sum += num;
    }

        average = sum / 5;

        cout << fixed << setprecision(4);
        cout << "-------------------------" << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << average << endl;

    return 0;
}
