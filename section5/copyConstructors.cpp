#include <iostream>
using namespace std;

class Animal {
   private:
    string name;

   public:
    Animal() { cout << "Animal created." << endl; };
    // We can define our own explicit 'copy constructor'. Notice that the parameter is a constant reference - allowing use to reference its values without the risk of changing them (which is what you want for a copy constructor).
    Animal(const Animal& other) : name(other.name) { cout << "Animal created by copying." << endl; };
    void setName(string name) { this->name = name; };
    void speak() { cout << "My name is: " << this->name << "." << endl; };
};

int main() {
    Animal animal1;
    animal1.setName("Raphael");

    // The default constructor will not be called. Something called the 'copy constructor' will be called.
    Animal animal2 = animal1;
    animal2.speak();
    animal2.setName("Rizzo");

    animal1.speak();
    animal2.speak();

    return 0;
}