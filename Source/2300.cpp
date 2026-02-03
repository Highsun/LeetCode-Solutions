#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> spells  = {3, 1, 2};
    std::vector<int> potions = {8, 5, 8};
    long long        success = 16;

    std::sort(potions.begin(), potions.end());

    int              n = spells.size();
    std::vector<int> result(n, 0);
    for (int i = 0; i < n; ++i) {
        int low  = 0;
        int high = potions.size() - 1;
        while (low <= high) {
            int       mid   = low + (high - low) / 2;
            long long power = static_cast<long long>(spells[i]) * static_cast<long long>(potions[mid]);
            if (power >= success) {
                result[i] = potions.size() - mid;
                high      = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    }

    for (const auto& count : result) {
        std::cout << count << " ";
    }

    return 0;
}