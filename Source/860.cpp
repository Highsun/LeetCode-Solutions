#include <iostream>
#include <vector>

int main() {
    std::vector<int> bills = {5, 5, 10, 20, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 5, 5, 20, 5, 20, 5};

    bool             flag = true;
    std::vector<int> changes(3, 0);  // 0 - 5, 1 - 10, 2 - 20
    for (auto money : bills) {
        int change = money - 5;
        if (change == 0)
            changes[0]++;
        else if (change == 5) {
            if (changes[0] > 0) {
                changes[0]--;
                changes[1]++;
            } else {
                flag = false;
                goto end;
            }
        } else if (change == 15) {
            if (changes[0] > 0 && changes[1] > 0) {
                changes[0]--;
                changes[1]--;
                changes[2]++;
            } else if (changes[0] > 2) {
                changes[0] -= 3;
                changes[2]++;
            } else {
                flag = false;
                goto end;
            }
        } else {
            flag = false;
            goto end;
        }
        // std::cout << changes[0] << ' ' << changes[1] << ' ' << changes[2] << std::endl;  // debug output
    }

end:
    std::cout << flag << std::endl;

    return 0;
}