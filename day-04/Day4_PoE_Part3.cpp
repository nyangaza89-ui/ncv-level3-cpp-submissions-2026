#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// reuse Part 2 prototypes
int calcSum(int a, int b);
int calcDiff(int a, int b);
int calcProduct(int a, int b);
double calcQuotient(int a, int b);

int main(){
    srand(time(0));
    int v1 = rand() % 50 + 1; // 1 to 50
    int v2 = rand() % 50 + 1;

    char op;
    cout << "Random numbers: " << v1 << " and " << v2 << endl;
    cout << "Enter operator (+, -, /, *): ";
    cin >> op;

    switch(op){
        case '+': cout << "Result: " << calcSum(v1,v2) << endl; break;
        case '-': cout << "Result: " << calcDiff(v1,v2) << endl; break;
        case '*': cout << "Result: " << calcProduct(v1,v2) << endl; break;
        case '/': cout << "Result: " << calcQuotient(v1,v2) << endl; break;
        default: cout << "Invalid math operation!" << endl;
    }
    return 0;
}

int calcSum(int a, int b){ return a + b; }
int calcDiff(int a, int b){ return a - b; }
int calcProduct(int a, int b){ return a * b; }
double calcQuotient(int a, int b){ return (double)a / b; }
