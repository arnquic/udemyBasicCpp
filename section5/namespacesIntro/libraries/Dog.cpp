#include "./Dog.h"

#include <iostream>

using namespace std;

namespace Animals {

Dog::Dog(/* args */) {
}

Dog::~Dog() {
}

void Dog::bark() {
    cout << "woof!" << endl;
}
}  // namespace Animals