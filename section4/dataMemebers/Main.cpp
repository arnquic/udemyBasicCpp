#include <iostream>
#include <string>

#include "./libraries/Person.h"

using namespace std;

int main() {
    {
        Person person;
        person.makeSad();
        person.greeting();
    }

    cout << "Ending Program." << endl;
    return 0;
}