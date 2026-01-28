#include <iostream>

int main() {
    int i = 1; // 1. Initialization
    while (i <= 5) { // 2. Test
        std::cout << "Hello! i is now " << i << std::endl;
        i = i + 1; // 3. Update (can also be written as i++)
    }
    std::cout << "Loop finished." << std::endl;
    return 0;
}
