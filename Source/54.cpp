#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    int                            m = matrix.size();
    int                            n = matrix[0].size();
    std::vector<std::vector<bool>> visited(m, std::vector<bool>(n, false));
    std::vector<int>               ans;

    // 定义四个方向：右、下、左、上
    int dr[] = {0, 1, 0, -1};
    int dc[] = {1, 0, -1, 0};

    int r = 0, c = 0, dir = 0;

    for (int i = 0; i < m * n; ++i) {
        ans.push_back(matrix[r][c]);
        visited[r][c] = true;

        int next_r = r + dr[dir];
        int next_c = c + dc[dir];

        if (next_r >= 0 && next_r < m && next_c >= 0 && next_c < n && !visited[next_r][next_c]) {
            r = next_r;
            c = next_c;
        } else {
            dir = (dir + 1) % 4;
            r += dr[dir];
            c += dc[dir];
        }
    }

    for (int num : ans) std::cout << num << " ";

    return 0;
}