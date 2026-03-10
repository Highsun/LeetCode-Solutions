#include <cstddef>
#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    std::sort(intervals.begin(), intervals.end());

    std::vector<std::vector<int>> ans;
    ans.push_back(intervals[0]);
    for (size_t i = 1; i < intervals.size(); ++i) {
        std::vector<int>& last = ans.back();
        if (intervals[i][0] <= last[1]) {
            last[1] = std::max(last[1], intervals[i][1]);
        } else {
            ans.push_back(intervals[i]);
        }
    }

    for (auto pair : ans) {
        std::cout << pair[0] << " " << pair[1] << std::endl;
    }

    return 0;
}