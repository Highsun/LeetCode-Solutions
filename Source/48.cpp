#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Caution: this is a direct solution which cannot be compiled and executed!
    int n = matrix.size();
    // 先转置
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp     = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    // 再对换列
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            int temp             = matrix[j][i];
            matrix[j][i]         = matrix[j][n - i - 1];
            matrix[j][n - i - 1] = temp;
        }
    }

    return 0;
}