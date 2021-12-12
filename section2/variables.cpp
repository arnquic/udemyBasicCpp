#include <iostream>

using namespace std;

int main()
{
    int numCats = 1;
    int numDogs = 7;

    cout << "Number of cats: " << numCats << endl;
    cout << "Number of dogs: " << numDogs << endl;
    cout << "Total animals: " << numCats + numDogs << endl;

    cout << "You got ANOTHER dog!" << endl;

    numDogs++;

    cout << "New number of dogs: " << numDogs << endl;
    cout << "New total animals: " << numCats + numDogs << endl;

    return 0;
}