#include <iostream>
using namespace std;

int main() {
    int a, b, size = 15; // Set the size of the heart

    // FOR THE APEX OF HEART (two humps)
    for (a = size / 2; a <= size; a = a + 2) {
        // Loops for spaces and printing the two peaks
        for (b = 1; b < size - a; b = b + 2) { cout << " "; }
        for (b = 1; b <= a; b++) { cout << "*"; }
        for (b = 1; b <= size - a; b++) { cout << " "; }
        for (b = 1; b <= a - 1; b++) { cout << "*"; }
        cout << endl; // New line
    }

    // FOR THE BASE OF HEART (inverted triangle)
    for (a = size; a >= 0; a--) {
        // Loops for spaces and printing the base triangle
        for (b = a; b < size; b++) { cout << " "; }
        for (b = 1; b <= ((a * 2) - 1); b++) { cout << "*"; }
        cout << endl; // New line
    }

    return 0; // Return success
}
