#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> piles = {9, 8, 7, 6, 5, 1, 2, 3, 4};

    sort(piles.begin(), piles.end());

    int n   = piles.size() / 3;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += piles[piles.size() - 2 * i];
    }

    cout << sum;
    return 0;
}