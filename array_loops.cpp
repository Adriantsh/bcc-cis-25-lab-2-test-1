#include <iostream>

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

    std::cout << "Enter " << SIZE << " numbers:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Number " << (i + 1) << ": ";
        std::cin >> numbers[i]; // The loop counter `i` is used as the index!
    }

    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum = sum + numbers[i]; // Add each element to the sum
    }

    double average = sum / SIZE;
    std::cout << "The average is: " << average << std::endl;

    return 0;

}
