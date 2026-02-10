#include <iostream>
#include <vector>

int main() {
    std::vector<int> prices = {8, 4, 6, 2, 3};

    std::vector<int> discountedPrices(prices.size());
    for (int i = 0; i < prices.size(); ++i) {
        discountedPrices[i] = prices[i];
        for (int j = i + 1; j < prices.size(); ++j) {
            if (prices[j] <= prices[i]) {
                discountedPrices[i] -= prices[j];
                break;
            }
        }
    }

    for (int price : discountedPrices) {
        std::cout << price << " ";
    }
    std::cout << std::endl;

    return 0;
}