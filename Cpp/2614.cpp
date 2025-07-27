#include<iostream>
#include<vector>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
	vector<vector<int>> nums = {{1,2,3}, {5,6,7}, {9,10,11}};

	int n = nums.size();
	int max_prime = 0;
	for (int i = 0; i < n; i++) {
		if (is_prime(nums[i][i]) && nums[i][i] > max_prime) max_prime = nums[i][i];
		if (is_prime(nums[i][n - i - 1]) && nums[i][n - i - 1] > max_prime) max_prime = nums[i][n - i - 1];
	}
	cout << max_prime;

	return 0;
}