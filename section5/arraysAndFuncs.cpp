#include <iostream>
using namespace std;

void displayStringEls1(int numEls, string stringArr[]) {
    cout << "display 1:" << endl;
    for (int i = 0; i < numEls; i++) {
        cout << stringArr[i] << endl;
    }
}

void displayStringEls2(int numEls, string* stringArr) {
    cout << "display 2:" << endl;
    for (int i = 0; i < numEls; i++) {
        cout << stringArr[i] << endl;
    }
}

void displayStringEls3(string (&stringArr)[3]) {
    cout << "display 3:" << endl;
    for (int i = 0; i < sizeof(stringArr) / sizeof(string); i++) {
        cout << stringArr[i] << endl;
    }
}

char* createCharArr(int numEls) {
    char* pNewCharArr = new char[numEls * sizeof(char)];
    return pNewCharArr;
}

void freeCharArr(char* pCharArr) {
    delete[] pCharArr;
}

int main() {
    string stringArr[] = {"apple", "orange", "banana"};
    string* pStringArr = stringArr;

    displayStringEls1(3, stringArr);
    displayStringEls2(3, pStringArr);
    displayStringEls3(stringArr);

    char assignmentChar = 'a';
    char* pCharArr = createCharArr(26);

    for (int i = 0; i < 26; i++) {
        pCharArr[i] = assignmentChar;
        cout << pCharArr[i] << endl;
        assignmentChar++;
    }

    freeCharArr(pCharArr);

    return 0;
}