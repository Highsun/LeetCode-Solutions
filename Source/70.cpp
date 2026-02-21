#include <iostream>

int main() {
    int n = 45;

    // Caution: this is a direct solution which cannot be compiled and executed!
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else {
        int a = 0, b = 1;
        for (int i = 1; i <= n; i++) {
            int c = a + b;
            a     = b;
            b     = c;
        }
        return b;
    }
}