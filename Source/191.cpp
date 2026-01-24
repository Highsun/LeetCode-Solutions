#include <iostream>

int main() {
    int n = 128;

    int count = 0;
    while (n) {
        if (n % 2 == 1) ++count;
        n /= 2;
    }

    std::cout << count << '\n';

    return 0;
}