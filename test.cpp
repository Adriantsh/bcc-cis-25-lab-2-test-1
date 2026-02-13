#include <iostream>

int add(int a, int b) {
    auto x = a + b;
    return x;
}

int main() {
  std::cout << add(40, 2);
}