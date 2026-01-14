#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool check(int a, int b, int c, int k) {
    if (abs(a - b) <= k && abs(a - c) <= k && abs(b - c) <= k) return true;
    return false;
}

int main() {
    vector<int> nums = {1, 3, 4, 8, 7, 9, 3, 5, 1};
    int         k    = 2;

    sort(nums.begin(), nums.end());
    int                 flag = 1;
    vector<vector<int>> answer;

    for (int i = 0; i < int(nums.size() / 3); i++) {
        bool temp = check(nums[3 * i], nums[3 * i + 1], nums[3 * i + 2], k);
        if (temp) {
            vector<int> correct = {nums[3 * i], nums[3 * i + 1], nums[3 * i + 2]};
            answer.push_back(correct);
        } else {
            flag = 0;
            break;
        }
    }
    if (flag == 0) answer = {};

    for (int i = 0; i < answer.size(); i++) {
        for (int j = 0; j < 3; j++) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}