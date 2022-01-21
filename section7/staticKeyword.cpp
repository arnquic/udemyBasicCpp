#include <iostream>
using namespace std;

// Normally in .h file.
class Test {
   public:
    // Initialization of const must be done right here!
    static const int MAX = 99;

   private:
    static int count;
    int id;

   public:
    Test() {
        this->id = count++;
    }
    static void showInfo() {
        cout << count << endl;
    }
    int getId() {
        return this->id;
    }
};

// Normally in .cpp class file.
int Test::count = 0;

int main() {
    cout << Test::MAX << endl;

    Test::showInfo();

    Test test1;

    cout << "test 1 id: " << test1.getId() << endl;

    Test test2;

    cout << "test 2 id: " << test2.getId() << endl;

    Test::showInfo();

    return 0;
}