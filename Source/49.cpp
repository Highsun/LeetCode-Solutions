#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    std::vector<std::string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    std::unordered_map<std::string, std::vector<std::string>> mp;
    for (auto& str : strs) {
        std::string key = str;
        std::sort(key.begin(), key.end());
        mp[key].emplace_back(str);
    }
    std::vector<std::vector<std::string>> ans;
    for (auto it = mp.begin(); it != mp.end(); ++it) ans.emplace_back(it->second);

    for (auto item : ans) {
        for (auto i : item) std::cout << i << " ";
        std::cout << std::endl;
    }

    return 0;
}