#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *ptr_array[3]; // Array of integer pointers

    // Assigning addresses of variables to pointers in the array
    ptr_array[0] = &a;
    ptr_array[1] = &b;
    ptr_array[2] = &c;

    // Accessing values using pointers
    printf("Value of a: %d\n", *ptr_array[0]);
    printf("Value of b: %d\n", *ptr_array[1]);
    printf("Value of c: %d\n", *ptr_array[2]);

    return 0;
}

