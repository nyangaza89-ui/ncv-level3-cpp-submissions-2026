#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double radius;
    double area;
    double perimeter;

    cout << "Enter the radius: ";
    cin >> radius;

    // Calculations
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    // Output
    cout << fixed << setprecision(2);
    cout << "-------------------------" << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
