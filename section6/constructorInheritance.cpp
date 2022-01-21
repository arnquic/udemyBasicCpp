#include <iostream>
using namespace std;

class Machine {
   public:
    Machine() : id(0) { cout << "Machine no-argument contructor called." << endl; }
    Machine(int id) : id(id) { cout << "Machine parameterized constructor called." << endl; }
    void info() { cout << "ID: " << this->id << endl; }

   private:
    int id;
};

class Vehicle : public Machine {
   public:
    // This will call the inherited contructor as well (Machine()).
    Vehicle() { cout << "Vehicle no-argument contructor called." << endl; }
    // We are now calling the inherited Machine parameterized contructor to set the id, despite it being a private property.
    Vehicle(int id) : Machine(id) { cout << "Vehicle parameterized constructor called." << endl; }
};

class Car : public Vehicle {
   public:
    // This will call the inherited contructors as well (Vehicle() and Machine()).
    Car() { cout << "Car no-argument contructor called." << endl; }
};

int main() {
    Car car;
    car.info();
    return 0;
}