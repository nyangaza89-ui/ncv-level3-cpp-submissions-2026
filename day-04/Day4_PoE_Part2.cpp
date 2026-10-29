#include <iostream>
using namespace std;

void getNumbers(int &a, int &b);
int calcSum(int a, int b);
int calcDiff(int a, int b);
int calcProduct(int a, int b);
double calcQuotient(int a, int b);

int main(){
    int x, y;
    getNumbers(x, y);
    cout << "Sum: " << calcSum(x,y) << endl;
    cout << "Diff: " << calcDiff(x,y) << endl;
    cout << "Product: " << calcProduct(x,y) << endl;
    cout << "Quotient: " << calcQuotient(x,y) << endl;
    return 0;
}

void getNumbers(int &a, int &b){
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}
int calcSum(int a, int b){ return a + b; }
int calcDiff(int a, int b){ return a - b; }
int calcProduct(int a, int b){ return a * b; }
double calcQuotient(int a, int b){
    if(b==0) return 0;
    return (double)a / b;
}
