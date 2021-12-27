#include <iostream>
#include <sstream>

#include "./libraries/Character.h"

using namespace std;

int main() {
    Character myCharacter;
    Character character2("Ratchet");
    myCharacter.setName("Seamus Blackley");

    cout << myCharacter.toString() << endl;
    cout << character2.toString() << endl;

    return 0;
}