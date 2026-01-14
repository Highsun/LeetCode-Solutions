#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<int, long> memo;
long                     dfs(int i, vector<vector<int>>& questions) {
    if (i >= questions.size()) return 0;
    if (memo.count(i)) return memo[i];
    long solve = questions[i][0] + dfs(questions[i][1] + i + 1, questions);
    long skip  = dfs(i + 1, questions);

    return memo[i] = max(solve, skip);
}

int main() {
    vector<vector<int>> questions;
    questions = {{1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5}};

    cout << dfs(0, questions);
    return 0;
}