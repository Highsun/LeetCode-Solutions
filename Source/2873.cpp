#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> nums = {8, 6, 3, 13, 2, 12, 19, 5, 19, 6, 10, 11, 9};

    long long max_result = 0;
    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                long long temp = ((long long)nums[i] - (long long)nums[j]) * (long long)nums[k];
                if (temp > max_result) max_result = temp;
            }
        }
    }

    cout << max_result;
    return 0;
}