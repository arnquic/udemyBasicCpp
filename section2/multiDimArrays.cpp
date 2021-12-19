#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int array2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    cout << sizeof(array2D) << endl;
    cout << sizeof(array2D[0]) << endl;

    cout << sizeof(typeid(array2D[0][0])) << "; At this point I am not sure why this is this value." << endl;

    uint numRows = sizeof(array2D) / sizeof(array2D[0]);
    uint numCols = sizeof(array2D[0]) / sizeof(int);
    cout << "numRows: " << numRows << endl;
    cout << "numCols: " << numCols << endl;

    for (uint i = 0; i < numRows; i++) {
        for (uint j = 0; j < numCols; j++) {
            cout << "array2d[" << i << "][" << j << "] is: " << array2D[i][j] << endl;
        }
    }

    return 0;
}