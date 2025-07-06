#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main() {
	vector<int> nums = {3,1,4,3,2,2,4};
	int k = 2;

	long long answer = 0;
	unordered_map<int, int> cnt;
	int pairs = 0, left = 0;
	for (int x : nums) {
		pairs += cnt[x]++;
		while (pairs >= k) {
			pairs -= --cnt[nums[left]];
			left++;
		}
		answer += left;
	}

	cout << answer;
	return 0;
}