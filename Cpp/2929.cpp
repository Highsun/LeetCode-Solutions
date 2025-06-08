#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n = 10006, limit = 20012;

	long long num = 0;
	if (n > 3 * limit) num = 0;
	else {
		for (int i = 0; i <= min(limit, n); i++) {
			num += max(min(limit, n - i) - max(0, n - i - limit) + 1, 0);
		}
	}

	cout << num;
	return 0;
}