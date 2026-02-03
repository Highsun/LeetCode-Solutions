#include <iostream>
#include <tuple>
#include <vector>

int main() {
    std::vector<std::vector<int>> classes       = {{2, 4}, {3, 9}, {4, 5}, {2, 10}};
    int                           extraStudents = 4;

    std::priority_queue<std::tuple<double, int, int>> pq;
    for (auto& e : classes) {
        int    a = e[0], b = e[1];
        double x = (double)(a + 1) / (b + 1) - (double)a / b;
        pq.push({x, a, b});
    }

    while (extraStudents--) {
        auto [_, a, b] = pq.top();
        pq.pop();
        a++;
        b++;
        double x = (double)(a + 1) / (b + 1) - (double)a / b;
        pq.push({x, a, b});
    }

    double ans = 0;
    while (pq.size()) {
        auto [_, a, b] = pq.top();
        pq.pop();
        ans += (double)a / b;
    }
    ans /= classes.size();

    std::cout << ans << '\n';

    return 0;
}