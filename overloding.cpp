#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    std::cout << "Adding two numbers: " << add(5, 3) << std::endl;
    std::cout << "Adding three numbers: " << add(2, 4, 6) << std::endl;
    return 0;
}

