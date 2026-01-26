#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {4, 2, 1, 3};

    std::sort(arr.begin(), arr.end());
    int gap = arr[arr.size() - 1] - arr[0];
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i + 1] - arr[i] < gap) {
            gap = arr[i + 1] - arr[i];
        }
    }
    std::vector<std::vector<int>> ans;
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i + 1] - arr[i] == gap) {
            std::vector<int> item = {arr[i], arr[i + 1]};
            ans.push_back(item);
        }
    }

    for (auto item : ans) {
        std::cout << "[" << item[0] << ", " << item[1] << "]" << ' ';
    }
    std::cout << '\n';

    return 0;
}