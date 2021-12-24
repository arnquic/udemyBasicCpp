// The '#' symbol signifies a pre-processor directive.
// These operations occur before the compiler goes to work.
#include <iostream>

#include "./src/utils.h"

using namespace std;

int main() {
    doSomething();

    return 0;
}

void doSomething() {
    cout << "Hellow from doSomething()" << endl;
}