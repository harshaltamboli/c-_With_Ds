#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    // Check if the number is divisible by 2
    if (num % 2 == 0)
        cout << num << " is an even number." << endl;
    else
        cout << num << " is an odd number." << endl;

    return 0;
}

