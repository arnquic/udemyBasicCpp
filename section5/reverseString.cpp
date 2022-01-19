#include <iostream>

using namespace std;

int main() {
    char text[] = "tarp";

    int lenText = sizeof(text) - 1;

    char *pText = text;
    char *pTextEnd = &text[lenText - 1];

    cout << "Before reversing: " << text << endl;

    while (pText < pTextEnd) {
        char temp = *pText;
        *pText = *pTextEnd;
        *pTextEnd = temp;

        pText++;
        pTextEnd--;

        cout << "After reversing iteration: " << text << endl;
    }

    cout << "After completed reversal: " << text << endl;

    return 0;
}