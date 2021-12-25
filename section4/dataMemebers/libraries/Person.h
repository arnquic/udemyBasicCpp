#ifndef PERSON_H_
#define PERSON_H_

#include <string>

using namespace std;

class Person {
   private:
    string mood;
    float weight;
    float height;

   public:
    void makeHappy();
    void makeSad();
    void greeting();
    Person();
    ~Person();
};

#endif