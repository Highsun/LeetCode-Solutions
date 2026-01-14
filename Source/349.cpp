#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> num1 = {4, 9, 5};
    vector<int> num2 = {9, 4, 9, 8, 4};

    sort(num1.begin(), num1.end());
    sort(num2.begin(), num2.end());

    vector<int> result;
    int         i = 0, j = 0, pre = -1;
    while (i < num1.size() && j < num2.size()) {
        if (num1[i] == num2[j] && pre != num1[i]) {
            pre = num1[i];
            result.push_back(num1[i]);
            i++;
            j++;
        } else {
            if (num1[i] > num2[j])
                j++;
            else
                i++;
        }
    }

    for (int k = 0; k < result.size(); k++) {
        cout << result[k] << " ";
    }

    return 0;
}