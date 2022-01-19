#include <iostream>
using namespace std;

class Animal {
   private:
    string name;

   public:
    void setName(string name) { this->name = name; };
    // The 'const' restricts this function so that it cannot change any instance data.
    void speak() const { cout << "My name is: " << this->name << endl; };
};

int main() {
    // consts are usually declared with all caps.
    const double PI = 3.141592;

    Animal animal;
    animal.setName("Raphael");
    animal.speak();

    int value = 8;

    // const int * const pValue = &value; (constant pointer to an int that is constant) would cause errors to be thrown during build at both lines 31 and 35;
    int *pValue = &value;

    cout << *pValue << endl;

    int number = 11;

    pValue = &number;  // If line 24 were to be "int * const pValue = &value;" (constant pointer to an int), then this line would throw an error during build.

    cout << *pValue << endl;

    *pValue = 12;  // If line 24 were to be "const int *pValue = &value;" (pointer to an int that is constant), then this line would throw an error during build.

    cout << number << endl;
}