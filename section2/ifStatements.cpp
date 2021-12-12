#include <iostream>

using namespace std;

int main() {
    string dbPassword = "123";
    cout << "Enter your password: " << flush;

    string inputPw;
    cin >> inputPw;

    if (inputPw == dbPassword) {
        cout << "You are now logged in." << endl;
    } else {
        cout << "The password you input was incorrect." << endl;
    }

    return 0;
}