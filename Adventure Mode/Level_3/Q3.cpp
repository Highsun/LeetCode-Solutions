#include <iostream>
#include <stack>
#include <string>
#include <vector>

int main() {
    int                      n    = 2;
    std::vector<std::string> logs = {"0:start:0", "1:start:2", "1:end:5", "0:end:6"};

    std::vector<int> exclusiveTime(n, 0);
    std::stack<int>  st;
    int              prevTime = 0;

    for (const auto& log : logs) {
        size_t      pos1 = log.find(':');
        size_t      pos2 = log.rfind(':');
        int         id   = std::stoi(log.substr(0, pos1));
        std::string type = log.substr(pos1 + 1, pos2 - pos1 - 1);
        int         time = std::stoi(log.substr(pos2 + 1));

        if (type == "start") {
            if (!st.empty()) {
                exclusiveTime[st.top()] += time - prevTime;
            }
            st.push(id);
            prevTime = time;
        } else {
            exclusiveTime[st.top()] += time - prevTime + 1;
            st.pop();
            prevTime = time + 1;
        }
    }

    for (int t : exclusiveTime) {
        std::cout << t << " ";
    }
    std::cout << std::endl;
    return 0;
}