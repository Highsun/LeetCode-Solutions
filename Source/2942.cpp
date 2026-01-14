#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

bool is_include_x(string word, char x) {
    bool flag = false;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] == x) {
            flag = true;
            break;
        }
    }
    return flag;
}

int main() {
    vector<string> words = {"abc", "bcd", "aaaa", "cbc"};
    char           x     = 'a';

    vector<int> answer;
    for (int i = 0; i < words.size(); i++) {
        if (is_include_x(words[i], x)) answer.push_back(i);
    }

    for (int i = 0; i < answer.size(); i++) cout << answer[i] << " ";
    return 0;
}