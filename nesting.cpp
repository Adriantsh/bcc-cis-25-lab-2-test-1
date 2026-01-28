#include <iostream>

int main() {

double salary;
int yearsOnJob;
std::cout << "Enter your annual salary: ";
std::cin >> salary;

if (salary >= 50000) {
    // This inner check only happens if the salary is high enough
    std::cout << "How many years have you been at your current job? ";
    std::cin >> yearsOnJob;
    if (yearsOnJob >= 2) {
        std::cout << "Congratulations! You qualify for the loan." << std::endl;
    } else {
        std::cout << "You must have been at your current job for at least 2 years." << std::endl;
    }
} else {
    std::cout << "You must earn at least $50,000 to qualify." << std::endl;
}

}