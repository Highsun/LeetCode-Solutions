#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string a = "1010";
    std::string b = "1011";

    std::vector<char> result;
    int               i = a.size() - 1, j = b.size() - 1;
    if (i > j) {
        std::string zeros;
        for (int k = 0; k < i - j; k++) zeros += '0';
        b = zeros + b;
        j = i;
    } else {
        std::string zeros;
        for (int k = 0; k < j - i; k++) zeros += '0';
        a = zeros + a;
        i = j;
    }

    char c = '0';
    while (i > -1) {
        if (c == '0') {
            if (a[i] == '0' && b[i] == '0')
                result.push_back('0');
            else if ((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0'))
                result.push_back('1');
            else {
                result.push_back('0');
                c = '1';
            }
        } else {
            if (a[i] == '0' && b[i] == '0') {
                result.push_back('1');
                c = '0';
            } else if ((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0'))
                result.push_back('0');
            else {
                result.push_back('1');
            }
        }
        i--;
    }
    if (c == '1') result.push_back('1');

    std::vector<char> answer;
    for (int k = result.size() - 1; k >= 0; k--) {
        answer.push_back(result[k]);
    }
    std::string final;
    for (int k = 0; k < answer.size(); k++) final += answer[k];

    std::cout << final << '\n';

    return 0;
}