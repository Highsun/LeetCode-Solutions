#include <algorithm>
#include <iostream>
#include <vector>

void backtrack(std::vector<std::vector<int>>& ans, std::vector<int>& path, std::vector<int>& candidates, int target, int start) {
    if (target == 0) {
        ans.push_back(path);
        return;
    }

    for (int i = start; i < candidates.size(); ++i) {
        if (candidates[i] > target) break;
        path.push_back(candidates[i]);
        backtrack(ans, path, candidates, target - candidates[i], i);
        path.pop_back();
    }
}

int main() {
    std::vector<int> candidates = {8, 7, 4, 3};
    int              target     = 11;

    std::sort(candidates.begin(), candidates.end());

    std::vector<std::vector<int>> ans;
    std::vector<int>              path;
    backtrack(ans, path, candidates, target, 0);

    for (const auto& combination : ans) {
        for (int num : combination) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}