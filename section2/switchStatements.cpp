#include <iostream>

using namespace std;

int main() {
    int value = 3;

    for (int value = 0; value < 6; value++) {
        switch (value) {
            case 2:
                cout << "value should be 2, it is: " << value << endl;
                break;
            case 3:
                cout << "value should be 3, it is: " << value << endl;
                break;
            case 4:
                cout << "value should be 4, it is: " << value << endl;
                break;

            default:
                cout << "unrecognized value. Value is: " << value << endl;
                break;
        }
    }

    return 0;
}