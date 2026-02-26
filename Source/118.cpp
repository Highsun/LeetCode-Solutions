#include <iostream>
#include <vector>

int main() {
    int numRows = 5;

    std::vector<std::vector<int>> ans;
    ans.push_back({1});
    if (numRows > 1) {
        for (int i = 1; i < numRows; i++) {
            std::vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            ans.push_back(row);
        }
    }

    for (const auto& row : ans) {
        for (int num : row) std::cout << num << ' ';
        std::cout << '\n';
    }

    return 0;
}