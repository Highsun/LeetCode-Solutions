#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> mat = {{0, 1}, {1, 0}};

    int idx = 0, max_1s = 0;
    for (int i = 0; i < mat.size(); i++) {
        int temp = 0;
        for (int j = 0; j < mat[i].size(); j++)
            if (mat[i][j] == 1) temp++;
        if (temp > max_1s) {
            max_1s = temp;
            idx    = i;
        }
    }

    cout << idx << " " << max_1s;
    return 0;
}