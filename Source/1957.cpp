#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s = "aaabaaaa";

    vector<int> flag(s.size(), 0);
    int         cnt  = 0;
    char        word = s[0];
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cnt++;
            if (cnt >= 2) flag[i] = 1;
        } else {
            cnt = 0;
        }
    }

    string answer;
    for (int i = 0; i < s.size(); i++) {
        if (flag[i] == 0) answer.push_back(s[i]);
    }
    cout << answer;

    return 0;
}