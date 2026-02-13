#include <iostream>

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int findMax(const int arr[], int size) {
    int max = arr[0]; // Assume the first element is the largest
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Found a new largest value
        }
    }
    return max;
}


int main() {
    const int SIZE = 5;
    int numbers[SIZE] = {10, 20, 30, 40, 50};
    
    printArray(numbers, SIZE); // Pass the array name and its size
    return 0;
}
