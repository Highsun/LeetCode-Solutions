#include <iostream>
#include <vector>

using namespace std;

bool is_even_len(int num) {
    int cnt = 0;
    while (num / 10) {
        cnt++;
        num /= 10;
    }
    if (cnt % 2 != 0) return true;
    return false;
}

int main() {
    vector<int> nums = {12, 345, 2, 6, 7896};

    int cnt = 0;
    for (int i : nums)
        if (is_even_len(i)) cnt++;
    cout << cnt;
    return 0;
}