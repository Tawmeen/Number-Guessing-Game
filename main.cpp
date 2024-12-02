#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;     // Number to guess
    int guess;   // User's guess
    int tries = 0; // Counter for the number of tries

    srand(time(NULL));
    num = (rand() % 100) + 1; // Generate a random number between 1 and 1000

    cout << "******** NUMBER GUESSING GAME ********\n";

    do {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "Too High!\n";
        } else if (guess < num) {
            cout << "Too Low\n";
        } else {
            cout << "CORRECT! Number of tries: " << tries << '\n';
        }
    } while (guess != num);

    cout << "**************************************\n";

    return 0;
}
