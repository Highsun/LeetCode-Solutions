#include <iostream>
#include <vector>

int main() {
    int n = 43261596;

    std::vector<int> binary;
    int              count = 0;
    while (n) {
        binary.push_back(n % 2);
        n /= 2;
        ++count;
    }
    if (count < 32)
        for (int i = 0; i < 32 - count; ++i) binary.push_back(0);

    int  ans   = 0;
    long pow_2 = 1;
    for (int i = 31; i >= 0; --i) {
        ans += (pow_2 * binary[i]);
        pow_2 *= 2;
    }

    std::cout << ans << '\n';

    return 0;
}