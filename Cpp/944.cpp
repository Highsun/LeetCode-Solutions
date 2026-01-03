#include <iostream>
#include <string>
#include <vector>

int main() {
	std::vector<std::string> strs = {"rrjk","furt","guzm"};

	int n = strs[0].size();
	int m = strs.size();
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m - 1; j++) {
			if (strs[j][i] > strs[j + 1][i]) {
				cnt++;
				break;
			}
		}
	}

	std::cout << cnt << '\n';
	return 0;
}