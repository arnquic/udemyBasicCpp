#include <iostream>

using namespace std;

int main() {
    // One way to store text. (With string data type).
    string text = "hello";

    cout << text << endl;

    // Another way, with char arrays.
    char charArr1[] = {'h', 'e', 'l', 'l', 'o'};
    // OR
    char charArr2[] = "hello";

    /* The sizeof function will return 6(bytes) for this array because a char array that is initilized with double-quotes gets a null terminator of '\0' added by default. It's the equivalent of initializing like so:
    char charArr2[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    */

    cout << "sizeof(charArr2): " << sizeof(charArr2) << endl;

    for (int i = 0; i < sizeof(charArr2); i++) {
        cout << i << " : " << charArr2[i] << endl;
    }

    int k = 0;
    while (true) {
        if (charArr2[k] == 0) {
            cout << endl;
            break;
        }

        cout << charArr2[k] << flush;

        k++;
    }

    return 0;
}