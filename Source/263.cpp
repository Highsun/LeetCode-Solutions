#include <iostream>

int main() {
    int n = 14;

    // Caution: this is a direct solution which cannot be compiled and executed!
    if (n == 0) return false;
    bool flag = true;
    while (flag) {
        if (n % 2 == 0)
            n = n / 2;
        else if (n % 3 == 0)
            n = n / 3;
        else if (n % 5 == 0)
            n = n / 5;
        else
            flag = false;
    }
    if (n == 1)
        return true;
    else
        return false;

    return 0;
}