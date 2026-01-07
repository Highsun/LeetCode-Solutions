#include <iostream>
#include <vector>

bool solution(int x) {
	if (x < 0) return false;
	else if (x == 0) return true;
	else {
		std::vector<char> num;
		while (x != 0) {
			num.push_back((char)(x % 10));
			x /= 10;
		}
		int n = num.size();
		for (int i = 0; i < n / 2; i++) {
			if (num[i] != num[n - i - 1]) return false;
		}
	}
	return true;
}

int main() {
	int x = 123454321;

	bool result = solution(x);
	std::cout << result << '\n';

	return 0;
}