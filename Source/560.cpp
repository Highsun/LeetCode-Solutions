#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {6, 4, 3, 1};
    int              k    = 10;

    int n     = nums.size();
    int count = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += nums[j];
            if (sum == k) {
                count++;
            }
        }
    }

    std::cout << count << std::endl;

    return 0;
}