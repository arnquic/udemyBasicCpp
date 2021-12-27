#include "./Character.h"

#include <iostream>
#include <sstream>

using namespace std;

Character::Character() {
    name = "";
    level = 0;
    experience = 0.0f;
};

Character::Character(string name) {
    this->name = name;
    level = 0;
    experience = 0.0f;
}

Character::~Character(){};

void Character::setName(string name) {
    this->name = name;
};

string Character::getName() {
    return this->name;
};

string Character::toString() {
    stringstream ss;
    ss << "Name: ";
    ss << this->name;
    ss << "; Level: ";
    ss << this->level;
    ss << "; Experience: ";
    ss << this->experience;
    ss << ";";
    return ss.str();
}