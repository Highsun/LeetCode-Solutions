#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
int main() {
    unordered_map<char, int> map = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                                    {'C', 100}, {'D', 500}, {'M', 1000}};

    string number;
    cin >> number;
    int sum = 0;
    for (int i = number.size() - 1; i >= 0; i--) {
        if (i + 1 < number.size() && map[number[i]] < map[number[i + 1]]) {
            sum -= map[number[i]];
        } else {
            sum += map[number[i]];
        }
    }
    cout << sum;
    return 0;
}