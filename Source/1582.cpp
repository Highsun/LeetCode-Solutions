#include <iostream>
#include <ostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> mat = {{1, 0, 0}, {0, 0, 1}, {1, 0, 0}};

    int cnt = 0;
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++) {
            if (mat[i][j] == 1) {
                int sum = 0;
                for (int k = 0; k < mat.size(); k++) {
                    if (mat[k][j] == 1) sum++;
                }
                for (int s = 0; s < mat[0].size(); s++) {
                    if (mat[i][s] == 1) sum++;
                }
                if (sum == 2) cnt++;
            }
        }
    }

    std::cout << cnt << std::endl;

    return 0;
}