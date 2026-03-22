#include <iostream>
#include <string>
#include <vector>

// 辅助函数：检查在 (row, col) 放置皇后是否安全
bool isValid(int row, int col, int n, std::vector<std::string>& board) {
    for (int i = 0; i < row; ++i)
        if (board[i][col] == 'Q') return false;

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
        if (board[i][j] == 'Q') return false;

    for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
        if (board[i][j] == 'Q') return false;

    return true;
}

void backtrack(int row, int n, std::vector<std::string>& board, std::vector<std::vector<std::string>>& ans) {
    // 递归终止条件：所有行都放好了皇后
    if (row == n) {
        ans.push_back(board);
        return;
    }

    for (int col = 0; col < n; ++col) {
        if (isValid(row, col, n, board)) {
            board[row][col] = 'Q';              // 放置皇后（做选择）
            backtrack(row + 1, n, board, ans);  // 递归到下一行
            board[row][col] = '.';              // 回溯（撤销选择）
        }
    }
}

int main() {
    int n = 4;

    std::vector<std::vector<std::string>> ans;
    std::vector<std::string>              board(n, std::string(n, '.'));

    backtrack(0, n, board, ans);

    std::cout << "[";
    for (int i = 0; i < ans.size(); ++i) {
        std::cout << "[";
        for (int j = 0; j < n; ++j) {
            std::cout << "\"" << ans[i][j] << "\"" << (j == n - 1 ? "" : ",");
        }
        std::cout << "]" << (i == ans.size() - 1 ? "" : ",");
    }
    std::cout << "]" << std::endl;

    return 0;
}