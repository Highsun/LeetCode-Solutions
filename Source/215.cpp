#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::vector<int> nums = {3, 2, 1, 5, 6, 4};
    int              k    = 2;

    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    std::cout << minHeap.top() << std::endl;

    return 0;
}