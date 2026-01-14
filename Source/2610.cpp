#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4};

    vector<vector<int>> nums_2d;
    int                 n   = nums.size();
    int                 j   = 0;
    int                 cnt = 0;
    vector<bool>        visited(n, false);
    while (cnt < n) {
        // find current number
        int temp;
        while (visited[j] && j < n) j++;
        temp = nums[j];

        // add temp into nums_2d
        int k = 0;
        for (int i = j; i < n; i++) {
            if (nums[i] == temp) {
                if (k >= nums_2d.size()) nums_2d.push_back(vector<int>());
                nums_2d[k].push_back(nums[i]);
                visited[i] = true;
                k++;
                cnt++;
            }
        }
    }

    // test
    for (vector<int> row : nums_2d) {
        for (int i : row) cout << i << " ";
        cout << endl;
    }

    return 0;
}