#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Outer loop for rows
    for (int i = 1; i <= rows; ++i) {
        // Inner loop for spaces
        for (int space = 1; space <= rows - i; ++space) {
            cout << " ";
        }
        // Inner loop for stars (2*i - 1 stars per row)
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}
