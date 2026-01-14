#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int get_number(char ch) { return ch - 'a'; }

int main() {
    vector<string> words = {"lx", "xl", "cl", "cc", "cx", "ll", "lx", "xc", "xc", "cx",
                            "ll", "xx", "xc", "xx", "xx", "lx", "lx", "xx", "cc", "xx"};

    int alpha_table[26][26] = {0};
    for (int i = 0; i < words.size(); i++) {
        alpha_table[get_number(words[i][0])][get_number(words[i][1])]++;
    }

    int max_length = 0;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < i; j++) {
            if (alpha_table[i][j] && alpha_table[j][i]) {
                max_length += min(alpha_table[i][j], alpha_table[j][i]) * 4;
            }
        }
    }
    int max_odd_number = 0;
    for (int i = 0; i < 26; i++) {
        if (alpha_table[i][i] % 2 == 1 && alpha_table[i][i] > max_odd_number) {
            max_odd_number = alpha_table[i][i];
        }
    }
    bool flag = true;
    for (int i = 0; i < 26; i++) {
        if (flag) {
            if (alpha_table[i][i] == max_odd_number) {
                max_length += alpha_table[i][i] * 2;
                flag = false;
                continue;
            }
        }
        max_length += (alpha_table[i][i] / 2) * 4;
    }

    cout << max_length;
    return 0;
}