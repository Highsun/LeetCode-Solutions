#include <iostream>
#include <vector>

using namespace std;

int main() {
	int m = 3;
	int n = 3;
	vector<vector<int>> ops = {{2,2},{3,3}};

	if (ops.empty()) {
		cout << m * n;
	} else {
		int row_min = 40001, col_min = 40001;
		for (int k = 0; k < ops.size(); k++) {
			if (ops[k][0] < row_min) row_min = ops[k][0];
			if (ops[k][1] < col_min) col_min = ops[k][1];
		}
		int result = row_min * col_min;
		cout << result;
	}
	return 0;
}