#include <iostream>
#include <sstream>

#include "./libraries/Character.h"

using namespace std;

int main() {
    Character myCharacter;
    Character character2("Ratchet");
    Character character3("Ellie", 25, 324.6f);
    myCharacter.setName("Seamus Blackley");

    cout << myCharacter.toString() << endl;
    cout << character2.toString() << endl;
    cout << character3.toString() << endl;

    return 0;
}