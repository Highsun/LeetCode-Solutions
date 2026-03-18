#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> grid = {{7, 2, 9}, {1, 5, 0}, {2, 6, 6}};
    int                           k    = 20;

    int                           rows = grid.size();
    int                           cols = grid[0].size();
    std::vector<std::vector<int>> sums(rows, std::vector<int>(cols, 0));
    int                           cnt = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int top     = (i > 0) ? sums[i - 1][j] : 0;
            int left    = (j > 0) ? sums[i][j - 1] : 0;
            int topLeft = (i > 0 && j > 0) ? sums[i - 1][j - 1] : 0;

            sums[i][j] = grid[i][j] + top + left - topLeft;

            if (sums[i][j] <= k) {
                cnt++;
            }
        }
    }

    std::cout << cnt << std::endl;
    return 0;
}