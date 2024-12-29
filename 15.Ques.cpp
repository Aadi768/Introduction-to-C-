/* Ques - if the ages of ram, shyam and ajay are input through the keyboard, WAP
 to determine the youngest of three */
#include <iostream>

int main() {
    int age1, age2, age3;
    std::cout << "Enter the age of Ram: ";
    std::cin >> age1;
    std::cout << "Enter the age of Shyam: ";
    std::cin >> age2;
    std::cout << "Enter the age of Ajay: ";
    std::cin >> age3;

    if (age1 < age2) {
        if (age1 < age3) {
            std::cout << "Ram is the youngest." << std::endl;
        } else {
            std::cout << "Ajay is the youngest." << std::endl;
        }
    } else {
        if (age2 < age3) {
            std::cout << "Shyam is the youngest." << std::endl;
        } else {
            std::cout << "Ajay is the youngest." << std::endl;
        }
    }

    return 0;
}