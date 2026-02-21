#include <cstring>
#include <iostream>

std::string to_binary_inverse(int n) {
    std::string n_binary;
    while (n) {
        if (n % 2 == 0)
            n_binary += '0';
        else
            n_binary += '1';
        n /= 2;
    }
    return n_binary;
}

int main() {
    int left  = 6;
    int right = 10;

    int cnt = 0;
    for (int i = left; i <= right; i++) {
        std::string binary = to_binary_inverse(i);
        int         sum    = 0;
        for (auto ch : binary)
            if (ch == '1') sum++;
        if (sum == 2 || sum == 3 || sum == 5 || sum == 7 || sum == 11 || sum == 13 || sum == 17 || sum == 19) cnt++;
    }

    std::cout << cnt << std::endl;

    return 0;
}