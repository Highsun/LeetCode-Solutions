#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<int> nums = {1,1,1,1};

	int n = nums.size();
	int max_len = 0;
	if (n <= 1) max_len = 0;
	else {
		sort(nums.begin(), nums.end());
		int i = 0, j = 1;
		while (j <= n) {
			if (j < n && nums[j] - nums[i] <= 1) j++;
			else {
				if (max_len < j - i && j - i != 1 && nums[j-1] != nums[i]) max_len = j - i;
				i++;
				j = i + 1;
			}
		}
	}
	cout << max_len;

	return 0;
}