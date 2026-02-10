#include <algorithm>
#include <iostream>

int main() {
    int n = 13;

    long long mulk = 1;
    int       ans  = 0;
    for (int k = 0; n >= mulk; ++k) {
        ans += (n / (mulk * 10)) * mulk + std::min(std::max(n % (mulk * 10) - mulk + 1, 0LL), mulk);
        mulk *= 10;
    }

    std::cout << ans << std::endl;

    return 0;
}