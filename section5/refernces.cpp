#include <iostream>

using namespace std;

// Because the parameter is a reference, this function will directly manipulate the value of the passed variable.
void changeDouble(double &value) {
    value = 123.4;
}

int main() {
    int value1 = 8;

    // This is a 'reference'. We create it by declaring the variable with a '&'. This is not a pointer, but does share a value with the equated variable.
    int &value2 = value1;
    // This will also change the value of value1.
    value2 = 10;

    cout << "value1: " << value1 << endl;
    cout << "value2: " << value2 << endl;

    double value = 4.321;
    cout << "value prior to passing to referencing function: " << value << endl;
    changeDouble(value);
    cout << "value after passing to referencing function: " << value << endl;

    return 0;
}