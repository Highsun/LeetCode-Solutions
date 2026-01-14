#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
    vector<int> nums = {3, 4, 5};

    string result;
    if ((nums[0] + nums[1] <= nums[2]) || (nums[0] + nums[2] <= nums[1]) ||
        (nums[1] + nums[2] <= nums[0]))
        result = "none";
    else if (nums[0] == nums[1] && nums[0] == nums[2])
        result = "equilateral";
    else if ((nums[0] == nums[1] && nums[0] != nums[2]) ||
             (nums[0] == nums[2] && nums[0] != nums[1]) ||
             (nums[1] == nums[2] && nums[1] != nums[0]))
        result = "isosceles";
    else
        result = "scalene";

    cout << result;
    return 0;
}