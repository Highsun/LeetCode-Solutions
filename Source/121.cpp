#include <iostream>
#include <vector>

int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};

    int min_price  = prices[0];
    int max_profit = 0;
    for (int i = 1; i < prices.size(); ++i) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else {
            int profit = prices[i] - min_price;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
    }

    std::cout << max_profit;

    return 0;
}