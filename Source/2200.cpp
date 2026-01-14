#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {3, 4, 9, 1, 3, 9, 5};
    int         key  = 9;
    int         k    = 1;

    vector<int> idx;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == key) idx.push_back(i);
    }
    vector<int> answer(nums.size(), 0);
    for (int j = 0; j < idx.size(); j++) {
        for (int i = 0; i < nums.size(); i++) {
            if (answer[i] == 0 && abs(i - idx[j]) <= k) answer[i]++;
        }
    }
    vector<int> results;
    for (int i = 0; i < answer.size(); i++) {
        if (answer[i]) results.push_back(i);
    }

    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << " ";
    }
    return 0;
}