#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {10, 13, 6, 2};

    int         n = nums.size();
    vector<int> next_max(n, 0), prior_max(n, 0);
    next_max[n - 1] = nums[n - 1];
    for (int k = n - 2; k > 0; k--) {
        next_max[k] = max(next_max[k + 1], nums[k]);
    }
    prior_max[0] = nums[0];
    for (int i = 1; i < n - 1; i++) {
        prior_max[i] = max(prior_max[i - 1], nums[i]);
    }

    long long max_result = 0;
    for (int j = 1; j < n - 1; j++) {
        max_result = max(max_result, (prior_max[j - 1] - (long long)nums[j]) * next_max[j + 1]);
    }
    cout << max_result;
    return 0;
}