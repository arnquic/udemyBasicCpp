#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <iostream>

using namespace std;

class Character {
   private:
    string name;
    int level;
    float experience;

   public:
    Character();
    Character(string name);
    Character(string name, int level, float experience);
    ~Character();
    void setName(string name);
    string getName();
    string toString();
};

#endif