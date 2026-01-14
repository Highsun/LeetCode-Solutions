#include <iostream>

using namespace std;
int main() {
    int n = 51040;

    string divided_num;
    while (n / 1000) {
        int    temp = n % 1000;
        string add;

        if (temp == 0)
            add = "000";
        else if (temp > 0 && temp < 10)
            add = "00" + to_string(temp);
        else if (temp >= 10 && temp < 100)
            add = "0" + to_string(temp);
        else
            add = to_string(temp);

        divided_num.insert(0, "." + add);
        n /= 1000;
    }
    divided_num.insert(0, to_string(n));

    cout << divided_num;
    return 0;
}