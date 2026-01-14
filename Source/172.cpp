#include <algorithm>
#include <iostream>

using namespace std;

int get_num_k(int n, int k) {
    int cnt = 0;
    while (n % k == 0) {
        cnt++;
        n /= k;
    }
    return cnt;
}

int main() {
    int n = 100;

    int num;
    if (n == 0)
        num = 0;
    else {
        int num_2 = 0, num_5 = 0;
        for (int i = 1; i <= n; i++) {
            num_2 += get_num_k(i, 2);
            num_5 += get_num_k(i, 5);
            // cout << i << ": " << num_2 << " " << num_5 << endl;
        }
        num = min(num_2, num_5);
    }

    cout << num;
    return 0;
}