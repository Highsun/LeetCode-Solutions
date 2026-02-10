#include <iostream>

int main() {
    int n = 5;

    long sum = 0;
    int  i   = 1;
    while (sum <= n) {
        sum += i;
        ++i;
    }

    std::cout << i - 2 << std::endl;

    return 0;
}