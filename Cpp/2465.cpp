#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	vector<int> nums = {4,1,4,0,3,5};

	sort(nums.begin(), nums.end());
	int flag[201] = {0};
	for (int i = 0; i < nums.size() / 2; i++) {
		float median = ((float)nums[i] + (float)nums[nums.size() - i - 1]) / 2;
		flag[(int)(median * 2)]++;
	}
	int cnt = 0;
	for (int i = 0; i < 201; i++) {
		if (flag[i] != 0) cnt++;
	}
	cout << cnt;
	return 0;
}