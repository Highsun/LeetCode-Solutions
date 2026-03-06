#include <iostream>
#include <vector>

int main() {
    std::vector<int> flowerbed = {1, 0, 0, 0, 1};
    int              n         = 2;

    for (int i = 0; i < flowerbed.size(); ++i) {
        if (flowerbed[i] == 0) {
            bool emptyLeft  = (i == 0) || (flowerbed[i - 1] == 0);
            bool emptyRight = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);

            if (emptyLeft && emptyRight) {
                flowerbed[i] = 1;
                n--;
            }
        }
    }

    bool ans = n <= 0 ? true : false;

    std::cout << std::boolalpha << ans << std::endl;

    return 0;
}