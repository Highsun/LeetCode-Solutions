#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
	std::vector<int> nums = {3,2,3};

	// Caution: this is a direct solution which cannot be compiled and executed!
	int n = nums.size();
	if (n == 1) return nums[0];

	std::unordered_map<int, int> counts;
	for (int i = 0; i < n; i++) {
	    counts[nums[i]]++;
	    if (counts[nums[i]] > n / 2) {
	        return nums[i];
	    }
	}
	return -1;

	return 0;
}