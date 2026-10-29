// Number Guessing Game

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int random(int maximum);

int random(int maximum) {
    return 1 + rand() % maximum;
}

int main() {
    srand(time(nullptr));

    int secret = random(20);
    int guess = 0;
    int tries = 0;

    cout << "I am thinking of a number from 1 to 20." << endl;

    do {
        cout << "Guess a number from 1 to 20: ";
        cin >> guess;
        tries = tries + 1;

        if (guess == secret) {
            cout << "Correct!" << endl;
        } else if (abs(guess - secret) <= 3) {
        } else {
            cout << "Cold." << endl;
        }
    } while (guess != secret);

    cout << "Number of tries: " << tries << endl;

    return 0;
}
