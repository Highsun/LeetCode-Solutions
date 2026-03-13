#include <iostream>
#include <stack>
#include <vector>

int main() {
    std::vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};

    int              n = temperatures.size();
    std::vector<int> ans(n, 0);
    std::stack<int>  st;

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
            int prev_index = st.top();
            st.pop();
            ans[prev_index] = i - prev_index;
        }
        st.push(i);
    }

    for (auto num : ans) std::cout << num << " ";
    std::cout << std::endl;

    return 0;
}