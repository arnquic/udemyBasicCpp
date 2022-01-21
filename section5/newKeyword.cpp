#include <iostream>

using namespace std;

class Person {
   private:
    string name;

   public:
    Person(){};
    Person(string name) : name(name){};
    ~Person() { cout << "Destructor called." << endl; };
    void setName(char name) { this->name = name; };
    string getName() { return this->name; };
};

int main() {
    Person *personArr = new Person[26];
    char nameChar = 'a';

    cout << sizeof(Person) << endl;

    for (int i = 0; i < 26; i++) {
        personArr[i].setName(nameChar);
        cout << personArr[i].getName() << endl;
        nameChar++;
    }

    delete[] personArr;

    return 0;
}