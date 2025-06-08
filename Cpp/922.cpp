#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> nums = {4,2,5,7};

	vector<int> odds, evens;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] % 2 == 0) evens.push_back(nums[i]);
		else odds.push_back(nums[i]);
	}
	vector<int> ans;
	for (int i = 0; i < odds.size(); i++) {
		ans.push_back(evens[i]);
		ans.push_back(odds[i]);
	}

	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
	return 0;
}