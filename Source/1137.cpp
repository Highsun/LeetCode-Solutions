#include <iostream>
#include <vector>

int main() {
    int n = 25;

    std::vector<int> ans = {0, 1, 1};
    for (int i = 3; i <= n; i++) {
        int temp   = ans[0] + ans[1] + ans[2];
        ans[i % 3] = temp;
    }

    std::cout << ans[n % 3] << std::endl;

    return 0;
}