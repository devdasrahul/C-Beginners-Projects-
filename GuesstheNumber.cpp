#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numToGuess = rand() % 100 + 1;
    int guess;
    do {
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;
        if(guess < numToGuess)
            cout << "Too low! Try again.\n";
        else if(guess > numToGuess)
            cout << "Too high! Try again.\n";
        else
            cout << "Congratulations! You guessed it.\n";
    } while(guess != numToGuess);
    return 0;
}