#include <iostream>
#include <vector>

int main() {
    std::vector<int> cost = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};

    int              top = cost.size();
    std::vector<int> min_cost(top + 1, 0);
    for (int i = 2; i <= top; i++) {
        min_cost[i] += std::min(cost[i - 1] + min_cost[i - 1], cost[i - 2] + min_cost[i - 2]);
    }

    // debug output
    // for (auto num : min_cost) std::cout << num << " ";
    // std::cout << std::endl;

    std::cout << min_cost[top] << std::endl;

    return 0;
}