#include <iostream>

using namespace std;

int main() {
    bool gameRunning = true;

    const string secretWord = "hehe";
    string userInput;

    cout << "Enter a guess for what the secret word is." << endl;

    while (gameRunning) {
        cin >> userInput;

        if (userInput == secretWord) {
            cout << "You guessed the secret word! Good job!" << endl;
            gameRunning = false;
        } else {
            cout << "That's not the secret word. Guess again." << endl;
        }
    }

    return 0;
}