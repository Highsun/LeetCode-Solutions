#include <iostream>
#include <vector>

int is_lower(std::vector<std::vector<int>>& grid, int x, int y, int k, int& cnt, std::vector<std::vector<bool>>& visited) {
    if (visited[x][y]) {
        return cnt;
    }
    visited[x][y] = true;

    int sum = 0;
    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= y; j++) {
            sum += grid[i][j];
        }
    }
    if (sum <= k) {
        // std::cout << x << " " << y << " " << sum << std::endl;  // debug output
        cnt++;
        if (x < grid.size() - 1) is_lower(grid, x + 1, y, k, cnt, visited);
        if (y < grid[0].size() - 1) is_lower(grid, x, y + 1, k, cnt, visited);
    }
    return cnt;
}

int main() {
    std::vector<std::vector<int>> grid = {
        {7, 2, 9},
        {1, 5, 0},
        {2, 6, 6}};
    int k = 20;

    std::vector<std::vector<bool>> visited(grid.size(), std::vector<bool>(grid[0].size(), false));
    int                            cnt = 0;
    cnt                                = is_lower(grid, 0, 0, k, cnt, visited);

    std::cout << cnt << std::endl;

    return 0;
}