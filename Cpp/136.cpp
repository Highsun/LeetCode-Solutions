#include <iostream>
#include <vector>

int main() {
	std::vector<int> nums = {4,1,2,1,2};

	std::vector<int> flags(60001);
	for (int i = 0; i < nums.size(); i++) {
		flags[nums[i]+30000]++;
	}
	int result;
	for (int i = 0; i < 60001; i++) {
		if (flags[i] == 1) result = i - 30000;
	}
	std::cout << result << '\n';

	return 0;
}