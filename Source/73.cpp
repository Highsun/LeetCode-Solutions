#include <vector>

// Caution: this is a direct solution which cannot be compiled and executed!
class Solution {
   public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        int              m = matrix.size();
        int              n = matrix[0].size();
        std::vector<int> flag_rows(m, 0);
        std::vector<int> flag_cols(n, 0);

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == 0) {
                    flag_rows[i] = 1;
                    flag_cols[j] = 1;
                }
            }
        }

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (flag_rows[i] == 1 || flag_cols[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};