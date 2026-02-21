#include <iostream>
#include <string>

int main() {
    std::string version1 = "1.0.0";
    std::string version2 = "1.0.1";

    int ans = 0;
    int i = 0, j = 0;
    while (i < version1.size() || j < version2.size()) {
        int num1 = 0, num2 = 0;
        while (i < version1.size() && version1[i] != '.') {
            num1 = num1 * 10 + (version1[i] - '0');
            i++;
        }
        while (j < version2.size() && version2[j] != '.') {
            num2 = num2 * 10 + (version2[j] - '0');
            j++;
        }
        if (num1 < num2) {
            ans = -1;
            break;
        } else if (num1 > num2) {
            ans = 1;
            break;
        }
        i++;
        j++;
    }

    std::cout << ans << std::endl;

    return 0;
}