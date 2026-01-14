#include <iostream>
#include <vector>

using namespace std;

bool mody(int i, int j, int k) {
    int multiplier = i * j;
    if (!(multiplier % k)) return true;
    return false;
}

int main() {
    vector<int> nums = {5, 5, 9, 2, 5, 5, 9, 2, 2, 5, 5, 6, 2, 2, 5, 2, 5, 4, 3};
    int         k    = 7;

    int n   = nums.size();
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                if (mody(i, j, k)) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}