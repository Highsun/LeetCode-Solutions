#include<iostream>
#include<vector>

using namespace std;
int main() {
	vector<int> nums = {100,100,100,100};

	vector<int> count(101, 0);
	for (int i = 0; i < nums.size(); i++)
		count[nums[i]]++;

	int left = 0, right = 0;
	bool flag;
	int cnt = 0;
	for (int i = 1; i < count.size(); i++) {
		if (count[i] > 2) {
			flag = false;
			break;
		}
		if (count[i] == 1) {
			if (left < right) left++;
			else right++;
		}
		if (count[i] == 2) {
			left++;
			right++;
		}
		cnt++;
	}
	if (cnt == 100) {
		if (left == right) flag = true;
		else flag = false;
	}

	cout << flag;
	return 0;
}