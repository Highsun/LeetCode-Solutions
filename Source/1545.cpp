#include <algorithm>
#include <cstring>
#include <iostream>

void my_invert(std::string& str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '0')
            str[i] = '1';
        else
            str[i] = '0';
    }
}

std::string n_binary(int n) {
    if (n == 1)
        return "0";
    else {
        auto s_n_1    = n_binary(n - 1);
        auto sn1_copy = s_n_1;
        my_invert(sn1_copy);
        std::reverse(sn1_copy.begin(), sn1_copy.end());
        return s_n_1 + "1" + sn1_copy;
    }
}

int main() {
    int n = 3;
    int k = 1;

    std::string s_n = n_binary(n);
    // std::cout << s_n << std::endl;  // test output
    char ans = s_n[k - 1];

    std::cout << ans << std::endl;

    return 0;
}