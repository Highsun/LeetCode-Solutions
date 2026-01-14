#include <iostream>

int main() {
    int n = 10;

    int sum;
    int k = n / 7;
    int s = n % 7;
    sum   = 28 * k + 7 * k * (k - 1) / 2 + k * s + s * (s + 1) / 2;
    std::cout << sum << '\n';

    return 0;
}