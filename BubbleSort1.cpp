#include <iostream>
using namespace std;

int main() {
    int i, j, temp, n, a[50];
	
    cout << "Enter the number of elements: ";
    cin >> n;
	
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++) {
        cin >> a[i]; // Inputting values for the array
    }
	
    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
	
    cout << "Sorted elements: ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
	
    return 0;
}

