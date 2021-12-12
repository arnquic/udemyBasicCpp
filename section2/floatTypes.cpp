#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    float fValue = 30.3;

    cout << setprecision(20) << fValue << endl;

    double dValue = 30.3;

    cout << setprecision(20) << dValue << endl;

    double sum = fValue + dValue;

    cout << setprecision(20) << sum << endl;

    int intSum = sum + 30;

    cout << intSum << endl;

    return 0;
}