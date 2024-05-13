#include <iostream>

void checkDrivingLicenseEligibility(int age) {
    if (age >= 18) {
        std::cout << "Congratulations! You are eligible for a driving license." << std::endl;
    } else {
        std::cout << "Sorry, you are not eligible for a driving license yet." << std::endl;
    }
}

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(std::cin.fail()) {
        std::cout << "Invalid input. Please enter a valid age." << std::endl;
        return 1;
    }

    checkDrivingLicenseEligibility(age);
    
    return 0;
}
