#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> grid = {{1, 2, 3, 4},
                                {5, 6, 7, 8},
                                {9, 10, 11, 12},
                                {13, 14, 15, 16}};
    int                 x    = 1;
    int                 y    = 0;
    int                 k    = 3;

    for (int i = x; i < x + k / 2; i++) {
        for (int j = y; j < y + k; j++) {
            int targetI      = x + (x + k - 1 - i);
            int temp         = grid[i][j];
            grid[i][j]       = grid[targetI][j];
            grid[targetI][j] = temp;
        }
    }

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}