#include <iostream>
#include <vector>

int main() {
    int n = 5;

    // Caution: this is a direct solution which cannot be compiled and executed!
    if (n == 0) return 1;
    std::vector<int> binary;
    while (n != 0) {
        int mod = n % 2;
        binary.push_back(mod);
        n /= 2;
    }

    for (int i = 0; i < binary.size(); i++) {
        if (binary[i] == 0)
            binary[i] = 1;
        else
            binary[i] = 0;
    }

    int rever = 0;
    int bed   = 1;
    for (int i = 0; i < binary.size(); i++) {
        rever += binary[i] * bed;
        bed *= 2;
    }

    return rever;

    return 0;
}