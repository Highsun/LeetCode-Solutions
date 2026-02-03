#include <iostream>

int main() {
    int low = 1, high = 100;

    if (low % 2 == 0) ++low;
    if (high % 2 == 0) --high;
    int count = (high - low) / 2 + 1;

    std::cout << count << '\n';

    return 0;
}