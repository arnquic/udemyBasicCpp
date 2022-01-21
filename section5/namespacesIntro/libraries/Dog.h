#ifndef DOG_H
#define DOG_H

#include <iostream>
using namespace std;

namespace Animals {

class Dog {
   private:
    string name;

   public:
    Dog();
    ~Dog();
    void bark();
};

}  // namespace Animals

#endif