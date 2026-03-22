#include <algorithm>
#include <iostream>
#include <vector>

void rotate(std::vector<std::vector<int>>& matrix) {
    std::reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = i + 1; j < matrix[i].size(); ++j) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
}

bool compare(std::vector<std::vector<int>> mat, std::vector<std::vector<int>> target) {
    if (mat == target) return true;
    return false;
}

int main() {
    std::vector<std::vector<int>> mat    = {{0, 1}, {1, 0}};
    std::vector<std::vector<int>> target = {{1, 0}, {0, 1}};

    bool ans = false;
    for (int i = 0; i < 4; ++i) {
        rotate(mat);
        if (compare(mat, target)) {
            ans = true;
            break;
        }
    }

    std::cout << std::boolalpha << ans << std::endl;

    return 0;
}