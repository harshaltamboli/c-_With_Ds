#include <iostream>
using namespace std;

int main() {
    int i, j, n, temp, a[30];
    
    cout << "Enter The Element : ";
    cin >> n;
    
    cout << "please enter the any no: ";
    
    for(i = 0; i < n; i++) {
        cin >> a[i];
    }

    
    for(i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        
        while((j >= 0) && (a[j] > temp)) {
           a[j + 1] = a[j];
            j = j - 1;
        }
        
        a[j + 1] = temp;
    }
    
    cout << "\nSorted list as follows: \n";    
    for(i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}

