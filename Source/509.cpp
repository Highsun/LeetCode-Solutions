#include <iostream>
#include <ostream>

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 5;

    int ans = fib(n);

    std::cout << ans << std::endl;

    return 0;
}