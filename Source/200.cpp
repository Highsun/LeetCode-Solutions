#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<char>> grid = {
        {'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'}, {'1', '1', '1', '1', '1'}, {'1', '0', '0', '1', '0'}};

    int numArea = 0;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == '1') {
                numArea++;
                std::vector<std::pair<int, int>> stack;
                stack.emplace_back(i, j);
                while (!stack.empty()) {
                    auto [x, y] = stack.back();
                    stack.pop_back();
                    if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] != '1') {
                        continue;
                    }
                    grid[x][y] = '0';
                    stack.emplace_back(x - 1, y);
                    stack.emplace_back(x + 1, y);
                    stack.emplace_back(x, y - 1);
                    stack.emplace_back(x, y + 1);
                }
            }
        }
    }

    std::cout << numArea << std::endl;

    return 0;
}