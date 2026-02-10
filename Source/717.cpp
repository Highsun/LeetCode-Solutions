#include <iostream>
#include <vector>

int main() {
    std::vector<int> bits = {1, 1, 1, 0};

    int n = bits.size();
    int i = 0;
    while (i < n - 1) {
        if (bits[i] == 1)
            i += 2;
        else
            ++i;
    }

    // std::cout << i << '\n';
    if (n - i == 1)
        std::cout << true << '\n';
    else
        std::cout << false << '\n';

    return 0;
}