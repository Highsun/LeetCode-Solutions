#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<int> nums = {7,1,5,4};

	int n = nums.size();
	int ans = -1;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (nums[j] - nums[i] > max(ans, 0)) ans = nums[j] - nums[i];
		}
	}
	cout << ans;
	
	return 0;
}