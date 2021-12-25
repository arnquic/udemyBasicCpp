#include "./Person.h"

#include <iostream>
#include <string>

using namespace std;

Person::Person() {
    cout << "Person created." << endl;
    mood = "happy";
    weight = 160.5f;
    height = 5.75f;
}

Person::~Person() {
    cout << "Person destroyed." << endl;
}

void Person::makeHappy() {
    mood = "happy";
}

void Person::makeSad() {
    mood = "sad";
}

void Person::greeting() {
    if (mood.empty()) {
        cout << "I'm a person instance saying 'Hi.'" << endl;
    } else if (mood == "happy") {
        cout << "It's so great to see you!!!" << endl;
    } else {
        cout << "Hi..." << endl;
    }
}