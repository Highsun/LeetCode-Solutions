#include <iostream>
#include <vector>

using namespace std;
int main() {
	vector<int> nums = {10,5,2,6};
	int k = 100;

	int cnt = 0;
	for (int i = 0; i < nums.size(); i++) {
		int multiplier = nums[i], j = i;
		while(multiplier < k && j < nums.size()) {
			cnt++;
			j++;
			if (j < nums.size()) multiplier *= nums[j];
		}
	}
	cout << cnt;
	return 0;
}