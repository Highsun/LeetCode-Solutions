#include <cmath>
#include <iostream>

double myPow(double x, long n) {
    if (n == 0 || x == 1.0) return 1;
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    double ans = 1;
    while (n > 0) {
        if (n & 1) ans *= x;
        x *= x;
        n /= 2;
    }
    return ans;
}

int main() {
    double x = 2.0;
    int    n = -2147483648;
    std::cout << myPow(x, n) << std::endl;

    std::cout << std::pow(x, n) << std::endl;

    return 0;
}