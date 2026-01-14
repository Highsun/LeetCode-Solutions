#include <iostream>

using namespace std;
int main() {
    vector<int> tickets = {1, 2, 3, 4};
    int         k       = 2;

    int time = 0;
    while (tickets[k] > 0) {
        int recent = 0;
        for (int i = 0; i < tickets.size(); i++) {
            if (tickets[i]-- > 0) {
                recent++;
            }
            if (tickets[k] == 0) {
                break;
            }
        }
        time += recent;
    }

    cout << time;

    return 0;
}