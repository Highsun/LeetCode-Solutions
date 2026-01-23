#include <iostream>
#include <vector>

int main() {
    std::vector<int> target = {1, 2};
    int              n      = 4;

    std::string              op_1 = "Push";
    std::string              op_2 = "Pop";
    std::vector<std::string> ans;

    int current = 0;
    int len     = target.size();
    for (int i = 1; i <= std::min(n, target.back()); i++) {
        if (i != target[current]) {
            ans.push_back(op_1);
            ans.push_back(op_2);
        } else {
            ans.push_back(op_1);
            if (current < len) current++;
        }
    }

    for (auto op : ans) std::cout << op << ' ';
    std::cout << '\n';

    return 0;
}