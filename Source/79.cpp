#include <cstring>
#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'},
    };
    std::string word = "SEE";

    auto dfs = [&](auto& self, int row, int col, int idx, std::vector<std::vector<bool>>& visited) -> bool {
        if (idx == word.length()) return true;
        if (row < 0 || row >= board.size() || col < 0 || col >= board[0].size()) return false;
        if (visited[row][col] || board[row][col] != word[idx]) return false;

        visited[row][col] = true;
        bool result       = self(self, row + 1, col, idx + 1, visited) || self(self, row - 1, col, idx + 1, visited) ||
                      self(self, row, col + 1, idx + 1, visited) || self(self, row, col - 1, idx + 1, visited);
        visited[row][col] = false;

        return result;
    };

    bool                           found = false;
    std::vector<std::vector<bool>> visited(board.size(), std::vector<bool>(board[0].size(), false));

    for (int i = 0; i < board.size() && !found; i++) {
        for (int j = 0; j < board[0].size() && !found; j++) {
            if (board[i][j] == word[0]) {
                found = dfs(dfs, i, j, 0, visited);
            }
        }
    }

    std::cout << std::boolalpha << found << std::endl;

    return 0;
}