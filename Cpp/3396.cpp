#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> nums = {4,5,6,4,4};

	vector<int> flag(100, 0);
	int idx;
	for (int i = nums.size() - 1; i >= 0; i--) {
		flag[nums[i] - 1]++;
		if (flag[nums[i] - 1] > 1) {
			idx = i;
			break;
		}
	}
	int num = idx + 1; cout << num << endl;
	int ans = num / 3 + (num % 3 == 0 ? 0 : 1);

	cout << ans;
	return 0;
}