#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> g = {1, 2};
    vector<int> s = {1, 2, 3};

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int i = 0, j = 0, sum = 0;
    while (i < g.size() && j < s.size()) {
        if (g[i] <= s[j]) {
            sum++;
            i++;
            j++;
        } else {
            j++;
        }
    }

    cout << sum;

    return 0;
}