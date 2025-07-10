#include <iostream>

using namespace std;

int main() {
    int height;

    // Ask the user for the height of the triangle
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Check if the height is valid
    if (height <= 0) {
        cout << "Height must be a positive integer." << endl;
        return 1;
    }

    // Print the hollow triangle pattern
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height; ++j) {
            // Print '*' on the boundaries of the triangle
            if (j == 0 || j == height - 1 || i == height - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

