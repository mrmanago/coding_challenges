//Half of a Square
//
// Write a program that uses only two output statements,
// `cout << "#"` and `cout << "\n", to produce a pattern
// of has symbols shaped like half of a perfect 5 x 5 square
// (or a right triangle)

// I editted the program so that any triangle size could 
// be printed

#include <iostream>

using namespace std;

void printTriangle(int);
void printTriangle2(int);

int main() {
    cout << "Please input the triangle side length" << endl;
    int length;
    cin >> length;

    printTriangle(length);

    return 0;
}

void printTriangle(int side) {
    if (side > 0) {
        for (int i = 0; i < side; ++i) {
            cout << "#";
        }
        cout << "\n";
        printTriangle(--side);
    }
}

//book solution
void printTriangle2(int side) {
    for (int row = 0; row < side; ++row) {
        for (int hash = 0; hash < side - row; ++hash) {
            cout << "#";
        }
        cout << "\n";
    }
}