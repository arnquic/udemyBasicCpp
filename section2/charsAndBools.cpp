#include <iostream>

using namespace std;

int main() {
    bool bValue = true;
    cout << "bool value for 'true': " << bValue << endl;

    char cValue = '7';
    cout << "casted char of '7' to int: " << (int)cValue << endl;

    cout << "Size of char in bytes: " << sizeof(char) << endl;

    wchar_t wCharValue = 'i';
    cout << wCharValue << endl;
}