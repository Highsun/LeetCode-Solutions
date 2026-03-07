#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::vector<std::vector<int>> grid = {{2, 1, 1}, {1, 1, 0}, {0, 1, 1}};

    int                             rows = grid.size();
    int                             cols = grid[0].size();
    std::queue<std::pair<int, int>> q;
    int                             freshCount = 0;

    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (grid[r][c] == 2)
                q.push({r, c});
            else if (grid[r][c] == 1)
                freshCount++;
        }
    }

    int ans;
    if (freshCount == 0) ans = 0;

    int minutes = 0;
    int dr[]    = {-1, 1, 0, 0};
    int dc[]    = {0, 0, -1, 1};

    while (!q.empty() && freshCount > 0) {
        minutes++;
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            auto [r, c] = q.front();
            q.pop();

            for (int i = 0; i < 4; ++i) {
                int nr = r + dr[i];
                int nc = c + dc[i];

                if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == 1) {
                    grid[nr][nc] = 2;
                    freshCount--;
                    q.push({nr, nc});
                }
            }
        }
    }

    if (freshCount == 0)
        ans = minutes;
    else
        ans = -1;

    std::cout << ans << std::endl;

    return 0;
}