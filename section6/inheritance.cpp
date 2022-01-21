#include <iostream>
using namespace std;

class Animal {
   public:
    void speak() { cout << "Grrrr" << endl; }
};

class Cat : public Animal {
   public:
    void jump() { cout << "Cat jumping!" << endl; }
};

class Tiger : public Cat {
   public:
    void swim() { cout << "I'm a tiger and I actually like swimming." << endl; }
};

int main() {
    Animal a;
    a.speak();

    Cat cat;
    cat.speak();
    cat.jump();

    Tiger tiger;
    tiger.speak();
    tiger.jump();
    tiger.swim();

    return 0;
}