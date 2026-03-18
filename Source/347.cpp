#include <iostream>
#include <queue>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<int> nums = {1, 1, 1, 2, 2, 3};
    int              k    = 2;

    // map[num] = times
    std::unordered_map<int, int> counts;
    for (int num : nums) {
        counts[num]++;
    }

    typedef std::pair<int, int>                                   PII;
    std::priority_queue<PII, std::vector<PII>, std::greater<PII>> minHeap;

    for (auto const& [num, freq] : counts) {
        minHeap.push({freq, num});
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    std::vector<int> ans;
    while (!minHeap.empty()) {
        ans.push_back(minHeap.top().second);
        minHeap.pop();
    }

    for (int num : ans) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}