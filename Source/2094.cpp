#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> digits = {2, 1, 3, 0};

    int         n = digits.size();
    vector<int> results;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (digits[i] % 2 == 0) {
                    if (digits[j] != 0)
                        results.push_back(digits[j] * 100 + digits[k] * 10 + digits[i]);
                    if (digits[k] != 0)
                        results.push_back(digits[k] * 100 + digits[j] * 10 + digits[i]);
                }
                if (digits[j] % 2 == 0) {
                    if (digits[i] != 0)
                        results.push_back(digits[i] * 100 + digits[k] * 10 + digits[j]);
                    if (digits[k] != 0)
                        results.push_back(digits[k] * 100 + digits[i] * 10 + digits[j]);
                }
                if (digits[k] % 2 == 0) {
                    if (digits[j] != 0)
                        results.push_back(digits[j] * 100 + digits[i] * 10 + digits[k]);
                    if (digits[i] != 0)
                        results.push_back(digits[i] * 100 + digits[j] * 10 + digits[k]);
                }
            }
        }
    }

    int         m = results.size();
    vector<int> flag(1000, 0);
    for (int i = 0; i < m; i++) flag[results[i]]++;
    vector<int> answer;
    for (int i = 0; i < 1000; i++)
        if (flag[i] >= 1) answer.push_back(i);

    for (int i = 0; i < answer.size(); i++) cout << answer[i] << " ";

    return 0;
}