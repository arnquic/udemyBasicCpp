#include <iostream>

using namespace std;

int main() {
    const int elements = 6;

    string texts[elements] = {"one", "two", "three", "four", "five", "six"};

    string* pTexts = texts;
    string* pTextsEnd = &texts[elements - 1];

    int i = 0;

    cout << "The size of a bool in C++ is: " << sizeof(bool) << endl;
    cout << "The size of a string in C++ is: " << sizeof(string) << endl;

    while (pTexts <= pTextsEnd) {
        cout << "The address of texts[" << i << "] is: " << pTexts << endl;
        cout << "The value of texts[" << i << "] is: " << *pTexts << endl;
        i++;
        pTexts++;
    }

    // Reset to the beginning of the array
    string* pTextsStart = texts;

    // Pointers are longs? Need to confirm.
    long endMinusStart = (long)(pTextsEnd - pTextsStart);
    cout << "value at pTextsEnd - PTextsStart: " << endMinusStart << endl;

    return 0;
}