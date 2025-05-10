#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_max(vector<int> nums) {
	int temp = 0;
	for (int i : nums)
		if (i > temp)
			temp = i;
	return temp;
}

bool solution(vector<int> nums) {
	int n = nums.size();
	if (n < 2) return false;

	int sum = 0;
	for (int i : nums) sum += i;
	if (sum % 2) return false;

	int target = sum / 2;
	int max_num = find_max(nums);
	if (max_num > target) return false;

	vector<vector<int>> dp(n, vector<int>(target + 1, 0));
	for (int i = 0; i < n; i++) dp[i][0] = 1;
	dp[0][nums[0]] = 1;
	for (int i = 1; i < n; i++) {
		int num = nums[i];
		for (int j = 1; j <= target; j++) {
			if (j >= num) {
				dp[i][j] = dp[i - 1][j] | dp[i - 1][j - num];
			} else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	return bool(dp[n - 1][target]);
}

int main() {
	vector<int> nums = {1,2,3,5};

	bool result = solution(nums);
	cout << result;
	return 0;
}