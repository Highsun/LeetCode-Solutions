#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "AaAaAaaA";

    int times = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        char last = s[i], next = s[i + 1];
        if ((last - 'a' >= 0 && (last == next || last - next == 32)) ||
            (last - 'a' < 0 && (last == next || next - last == 32)))
            continue;
        else
            times++;
    }

    cout << times;
    return 0;
}