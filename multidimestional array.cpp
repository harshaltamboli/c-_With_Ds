#include <iostream>

const int ROWS = 3;
const int COLS = 4;

int main() {
    int array[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Accessing elements
    std::cout << "Element at (2, 3): " << array[1][2] << std::endl;

    return 0;
}

