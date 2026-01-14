#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> dijkstra(vector<vector<int>> times, int n, int k) {
    vector<vector<pair<int, int>>> graph(n + 1);

    for (auto& edge : times) {
        int u = edge[0], v = edge[1], w = edge[2];
        graph[u].push_back({v, w});
    }

    vector<int> min_time(n + 1, 600001);
    min_time[k] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, k});

    while (!pq.empty()) {
        pair<int, int> top  = pq.top();
        int            time = top.first;
        int            u    = top.second;
        pq.pop();

        if (time > min_time[u]) continue;

        for (auto& neighbor : graph[u]) {
            int v = neighbor.first;
            int w = neighbor.second;
            if (min_time[v] > min_time[u] + w) {
                min_time[v] = min_time[u] + w;
                pq.push({min_time[v], v});
            }
        }
    }

    return min_time;
}

int solution(vector<int> min_time, int n) {
    int max_time = 0;
    for (int i = 1; i <= n; i++) {
        if (min_time[i] == 600001) return -1;
        max_time = (max_time > min_time[i]) ? max_time : min_time[i];
    }
    return max_time;
}

int main() {
    vector<vector<int>> times = {{2, 1, 1}, {2, 3, 1}, {3, 4, 1}};
    int                 n = 4, k = 2;

    int time = solution(dijkstra(times, n, k), n);
    cout << time;
    return 0;
}