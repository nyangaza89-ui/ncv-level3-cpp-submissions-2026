
#include <iostream>
using namespace std;

void getMarks(int mrk[], int sz)
{
    // Get marks
    for (int x = 0; x < sz; x++)
    {
        cout << "Enter mark " << x + 1 << ": ";
        cin >> mrk[x];
    }
}

void displayMarks(int mrk[], int sz)
{
    // Display marks
    for (int x = 0; x < sz; x++)
    {
        cout << mrk[x] << " @ " << mrk[x] << endl;
    }
}

// Function to find and return the highest mark
int getHighestMark(int mrk[], int sz)
{
    int highest = mrk[0];

    for (int x = 1; x < sz; x++)
    {
        if (mrk[x] > highest)
        {
            highest = mrk[x];
        }
    }

    return highest;
}

// Function to find and return the lowest mark
int getLowestMark(int mrk[], int sz)
{
    int lowest = mrk[0];

    for (int x = 1; x < sz; x++)
    {
        if (mrk[x] < lowest)
        {
            lowest = mrk[x];
        }
    }

    return lowest;
}

const int SIZE = 5;

int main()
{
    int marks[SIZE];

    // Call function to enter marks
    getMarks(marks, SIZE);

    // Call function to display marks
   // displayMarks(marks, SIZE);

    // Call function to find the highest mark
    cout << "Highest mark: "
         << getHighestMark(marks, SIZE) << endl;

    // Call function to find the lowest mark
    cout << "Lowest mark: "
         << getLowestMark(marks, SIZE) << endl;

    return 0;
}
