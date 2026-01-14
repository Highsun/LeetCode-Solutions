#include <iostream>
#include <vector>
using namespace std;

void dfs(int index, const vector<int>& nums, vector<int>& path, vector<vector<int>>& result) {
    result.push_back(path);
    for (int i = index; i < nums.size(); i++) {
        path.push_back(nums[i]);
        dfs(i + 1, nums, path, result);
        path.pop_back();
    }
}

vector<vector<int>> get_subsets(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int>         path;
    dfs(0, nums, path, result);
    return result;
}

vector<int> get_binary_number(int k) {
    vector<int> binary(10, 0);
    int         i = 0;
    while (k) {
        binary[i++] = k % 2;
        k /= 2;
    }
    return binary;
}

int get_xor(vector<int> a, vector<int> b) {
    int xor_sum = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) xor_sum |= (1 << i);
    }
    return xor_sum;
}

int main() {
    vector<int> nums = {3, 4, 5, 6, 7, 8};

    vector<vector<int>> subsets = get_subsets(nums);
    int                 result  = 0;

    for (int i = 0; i < subsets.size(); i++) {
        if (subsets[i].empty()) continue;

        int xor_temp = subsets[i][0];
        for (int j = 1; j < subsets[i].size(); j++) {
            xor_temp ^= subsets[i][j];
        }
        result += xor_temp;
    }

    cout << result;
    return 0;
}