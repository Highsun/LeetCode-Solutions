#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> nums = {9,7,5,3};
	int k = 1;

	int cnt = 0;

	int min_num = 101;
	for (int i = 0; i < nums.size(); i++)
		if (nums[i] < min_num) min_num = nums[i];
	if (min_num < k) cnt = -1;
	else {
		int max_num = 0;
		for (int i = 0; i < nums.size(); i++)
			if (nums[i] > max_num) max_num = nums[i];
		while (max_num != k) {
			int big_num = k;
			for (int i = 0; i < nums.size(); i++)
				if (nums[i] > big_num && nums[i] < max_num) big_num = nums[i];
			// cout << "max_num: " << max_num << ", big_num: " << big_num;
			if (big_num != 0) {
				max_num = big_num;
				cnt++;
				// cout << " cnt: " << cnt << endl;
			} else {
				cnt = -1;
				break;
			}
		}
	}

	cout << cnt;
	return 0;
}