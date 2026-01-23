#include <iostream>
#include <string>

int square_sum(std::string num) {
    int result = 0;
    for (char i : num) result += (i - 48) * (i - 48);
    return result;
}

int main() {
    int n = 7;

    // Caution: this is a direct solution which cannot be compiled and executed!
    std::string num    = std::to_string(n);
    int         circle = square_sum(num);
    int         count  = 0;
    while (circle != 1) {
        circle = square_sum(std::to_string(circle));
        if (++count > 10000) return false;
    }
    return true;

    return 0;
}