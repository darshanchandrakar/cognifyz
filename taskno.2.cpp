// writing a code for generating the simple number patterns 
#include <iostream>
using namespace std;

void printPyramid(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int space = 1; space <= n - i; ++space) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void printTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void printInvertedPyramid(int n) {
    for (int i = n; i >= 1; --i) {
        for (int space = 1; space <= n - i; ++space) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void printDiamond(int n) {
    // Upper pyramid
    for (int i = 1; i <= n; ++i) {
        for (int space = 1; space <= n - i; ++space) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
    // Lower inverted pyramid
    for (int i = n - 1; i >= 1; --i) {
        for (int space = 1; space <= n - i; ++space) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    int rows;

    cout << "Select the pattern type:" << endl;
    cout << "1. Pyramid" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Inverted Pyramid" << endl;
    cout << "4. Diamond" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the number of rows: ";
    cin >> rows;

    switch (choice) {
        case 1:
            printPyramid(rows);
            break;
        case 2:
            printTriangle(rows);
            break;
        case 3:
            printInvertedPyramid(rows);
            break;
        case 4:
            printDiamond(rows);
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}

 