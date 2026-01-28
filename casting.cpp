#include <iostream>
using namespace std;

int main() {
    int total = 10;
    int count = 4;

    // Without casting (WRONG)
    double average1 = total / count;
    cout << "Without cast: " << average1 << endl;

    // With casting (CORRECT)
    double average2 = static_cast<double>(total) / count;
    cout << "With cast: " << average2 << endl;

    return 0;
}
