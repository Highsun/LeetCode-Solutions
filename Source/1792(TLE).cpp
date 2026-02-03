#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<int>> classes       = {{2, 4}, {3, 9}, {4, 5}, {2, 10}};
    int                           extraStudents = 4;

    for (int i = 0; i < extraStudents; ++i) {
        double max_increase = 0.0;
        int    flag;
        for (int j = 0; j < classes.size(); ++j) {
            double raw_rate = double(classes[j][0]) / double(classes[j][1]);
            double now_rate = (double(classes[j][0]) + 1) / (double(classes[j][1]) + 1);
            double gap      = now_rate - raw_rate;
            if (gap > max_increase) {
                max_increase = gap;
                flag         = j;
            }
        }
        ++classes[flag][0];
        ++classes[flag][1];
    }
    double ans = 0.0;
    for (auto item : classes) {
        ans += double(item[0]) / double(item[1]);
    }
    ans /= classes.size();

    std::cout << ans << '\n';

    return 0;
}