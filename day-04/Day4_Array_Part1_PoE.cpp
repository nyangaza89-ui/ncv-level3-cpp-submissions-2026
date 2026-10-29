#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int evenCount = 0;

    cout << "Enter 5 numbers:" << endl;
    for(int i=0; i<5; i++){
        cout << "Number " << i+1 << ": ";
        cin >> arr[i];
    }

    // count evens
    for(int i=0; i<5; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }
    }

    cout << "Number of even numbers: " << evenCount << endl;

    cout << "All values: ";
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
