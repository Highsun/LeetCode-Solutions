#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> routate(vector<vector<int>> dir) {
	vector<vector<int>> new_dir(2, vector<int>(1, 0));
	new_dir[0][0] = dir[1][0];
	new_dir[1][0] = -dir[0][0];

	return new_dir;
}

int main() {
	int n = 5;

	vector<vector<int>> mat(n, vector<int>(n, 0));
	int cnt = 1;
	int i = 0, j = 0;
	vector<vector<int>> dir = {{0},{1}};
    while (cnt <= n * n) {
        mat[i][j] = cnt++;

        int ni = i + dir[0][0];
        int nj = j + dir[1][0];

        if (ni < 0 || ni >= n || nj < 0 || nj >= n || mat[ni][nj] != 0)
            dir = routate(dir);

        i += dir[0][0];
        j += dir[1][0];
    }

	for (int s = 0; s < n; s++) {
		for (int k = 0; k < n; k++)
			cout << mat[s][k] << " ";
		cout << endl;
	}
	return 0;
}