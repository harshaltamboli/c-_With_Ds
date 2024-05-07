#include <iostream>

class Calculator {
public:
    // Overloaded function for addition
    int calculate(int a, int b) {
        return a + b;
    }

    // Overloaded function for subtraction
    int calculate(int a, int b, char operation) {
        if (operation == '+') {
            return a + b;
        } else if (operation == '-') {
            return a - b;
        } else if (operation == '*') {
            return a * b;
        } else if (operation == '/') {
            if (b != 0)
                return a / b;
            else {
                std::cerr << "Error: Division by zero!" << std::endl;
                return 0; // Handling division by zero
            }
        } else {
            std::cerr << "Error: Invalid operation!" << std::endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;

    // Addition
    std::cout << "Addition: " << calc.calculate(5, 3) << std::endl;

    // Subtraction
    std::cout << "Subtraction: " << calc.calculate(10, 4, '-') << std::endl;

    // Multiplication
    std::cout << "Multiplication: " << calc.calculate(6, 2, '*') << std::endl;

    // Division
    std::cout << "Division: " << calc.calculate(8, 0, '/') << std::endl;

    return 0;
}

