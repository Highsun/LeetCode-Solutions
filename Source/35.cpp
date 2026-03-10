#include <vector>

int main() {
    std::vector<int> nums   = {1, 3, 5, 6};
    int              target = 5;

    // Caution: this is a direct solution which cannot be compiled and executed!
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;

    return 0;
}