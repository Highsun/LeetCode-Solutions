#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s = "jqktcurgdvlibczdsvnsg";
    int    t = 7517;

    vector<long long> cnt(26, 0);
    for (int i = 0; i < s.size(); i++) {
        cnt[s[i] - 97]++;
    }

    const long long MOD = 1e9 + 7;

    while (t--) {
        vector<long long> temp(26, 0);
        for (int i = 0; i < 26; i++) {
            if (cnt[i] > 0) {
                if (i == 25) {
                    temp[0] = (temp[0] + cnt[25]) % MOD;
                    temp[1] = (temp[1] + cnt[25]) % MOD;
                } else {
                    temp[i + 1] = (temp[i + 1] + cnt[i]) % MOD;
                }
            }
        }
        cnt = temp;
    }

    long long all = 0;
    for (int i = 0; i < 26; i++) all = (all + cnt[i]) % MOD;

    cout << all;
    return 0;
}