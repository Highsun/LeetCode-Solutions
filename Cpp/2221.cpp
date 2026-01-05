#include <iostream>
#include <vector>

int main() {
	std::vector<int> nums = {1,2,3,4,5};

	while(nums.size() > 1) {
		for (int i = 0; i < nums.size() - 1; i++) {
			nums[i] = (nums[i] + nums[i+1]) % 10;
		}
		nums.pop_back();
	}
	std::cout << nums[0];

	return 0;
}