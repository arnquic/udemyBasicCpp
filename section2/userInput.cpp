#include <iostream>

using namespace std;

int main() {
    string text = "Enter your name: ";
    string userName;
    char correctnessResponse;
    cout << text << flush;

    cin >> userName;

    cout << "You entered your name as: " << userName << endl;
    cout << "Is that correct? (Y/n) " << flush;
    cin >> correctnessResponse;
}