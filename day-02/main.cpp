#include <iostream>

using namespace std;

int main()
{

int width;
int length;

double Area, Param;
cout << "Enter the length:"<<endl;
cin>> length;

cout << "Enter the width:"<<endl;
cin>> width;

Area= length*width;
Param= 2*(length+width);

cout<<"Area:"<< Area << endl;
cout<<"Parameter:"<< Param << endl;


/*

double avg1 = (70 + 85 + 90) / 3;     // 81
double avg2 = (70 + 85 + 90) / 3.0;   // 81.6667

int total = 245, tests = 3;
double avg3 = static_cast<double>(total) / tests;  // 81.6667
double avg4 = static_cast<double>(total / tests);  // 81

int whole = 9.99;                     // 9
*/
    return 0;
}
