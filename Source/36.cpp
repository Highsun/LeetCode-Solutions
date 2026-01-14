#include <iostream>
#include <vector>

using namespace std;

bool line_vaild(vector<char> line) {
    vector<int> num_line;
    for (char ch : line) num_line.push_back(ch - '0');
    int flag[10] = {0};
    for (int num : num_line) {
        if (num > 0 && num < 10) {
            flag[num]++;
            if (flag[num] > 1) return false;
        }
    }
    return true;
}

vector<char> to_line(vector<vector<char>> board, int i, int j) {
    vector<char> line;
    for (int s = i; s < i + 3; s++) {
        for (int t = j; t < j + 3; t++) {
            line.push_back(board[s][t]);
        }
    }
    return line;
}

bool check(vector<vector<char>> board) {
    // check rows
    for (int i = 0; i < 9; i++) {
        vector<char> row;
        for (int j = 0; j < 9; j++) row.push_back(board[i][j]);
        bool flag = line_vaild(row);
        if (!flag) return false;
    }
    // check columns
    for (int i = 0; i < 9; i++) {
        vector<char> col;
        for (int j = 0; j < 9; j++) col.push_back(board[j][i]);
        bool flag = line_vaild(col);
        if (!flag) return false;
    }
    // check 3x3 blocks
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            vector<char> block = to_line(board, i, j);
            bool         flag  = line_vaild(block);
            if (!flag) return false;
        }
    }
    // else
    return true;
}

int main() {
    vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                  {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                  {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                  {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                  {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                  {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                  {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                  {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                  {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    bool is_valid = check(board);
    cout << is_valid;
    return 0;
}