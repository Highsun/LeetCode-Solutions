#include <iostream>
#include <utility>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};
    int target = 5;

    // Caution: this is a direct solution which cannot be compiled and executed!
    if (matrix.empty() || matrix[0].empty()) return false;

    int m = matrix.size();
    int n = matrix[0].size();

    // 从右上角开始
    int x = 0;
    int y = n - 1;
    while (x < m && y >= 0) {
        if (matrix[x][y] == target) {
            return true;
        } else if (matrix[x][y] > target) {
            y--;
        } else {
            x++;
        }
    }
    return false;

    return 0;
}