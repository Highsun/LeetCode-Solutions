#include <iostream>
#include <vector>

int main() {
    int                           numCourses    = 2;
    std::vector<std::vector<int>> prerequisites = {{1, 0}};

    std::vector<std::vector<int>> graph(numCourses);
    std::vector<int>              indegree(numCourses, 0);
    for (const auto& pre : prerequisites) {
        graph[pre[1]].push_back(pre[0]);
        indegree[pre[0]]++;
    }

    std::vector<int> queue;
    for (int i = 0; i < numCourses; ++i) {
        if (indegree[i] == 0) {
            queue.push_back(i);
        }
    }

    int count = 0;
    while (!queue.empty()) {
        int course = queue.back();
        queue.pop_back();
        count++;
        for (int next : graph[course]) {
            indegree[next]--;
            if (indegree[next] == 0) {
                queue.push_back(next);
            }
        }
    }

    int ans = (count == numCourses) ? 1 : 0;

    std::cout << ans << std::endl;

    return 0;
}