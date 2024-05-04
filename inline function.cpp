#include <iostream>

// Inline function declaration
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 3;
    
    // Call to inline function
    int result = add(x, y);
    
    std::cout << "The result of adding " << x << " and " << y << " is: " << result << std::endl;
    
    return 0;
}

