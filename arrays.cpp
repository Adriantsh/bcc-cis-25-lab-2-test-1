#include <iostream>

int main() {
    const int SIZE = 3;
    int scores[SIZE];

   std::cout << "Enter score 1: ";
   std::cin >> scores[0];

   std::cout << "Enter score 2: ";
   std::cin >> scores[1];

   std::cout << "Enter score 3: ";
   std::cin >> scores[2];

   std::cout << "\n--- SCORES ---" << std::endl;
   std::cout << "Score 1: " << scores[0] << std::endl;
   std::cout << "Score 2: " << scores[1] << std::endl;
    std::cout << "Score 3: " << scores[2] << std::endl;

   return 0;
}

