#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

int main() {
    std::string              s        = "leetcode";
    std::vector<std::string> wordDict = {"leet", "code"};

    std::unordered_set<std::string> wordSet(wordDict.begin(), wordDict.end());

    // dp[i] 表示 s 的前 i 个字符是否能被拆分
    int               n = s.length();
    std::vector<bool> dp(n + 1, false);
    dp[0] = true;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            // 如果前 j 个字符合法，且 [j, i) 这一段在字典里
            if (dp[j] && wordSet.find(s.substr(j, i - j)) != wordSet.end()) {
                dp[i] = true;
                break;  // 只要找到一种拆法，dp[i] 就是 true，跳出内层循环
            }
        }
    }
    bool ans = dp[n] ? true : false;

    std::cout << std::boolalpha << ans << std::endl;

    return 0;
}