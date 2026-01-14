#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> action = {1, 2, 3, 4, 5};

    vector<int> odd, even;
    for (int i = 0; i < action.size(); i++) {
        if (action[i] % 2) {
            odd.push_back(action[i]);
        } else {
            even.push_back(action[i]);
        }
    }

    for (int i = 0; i < even.size(); i++) {
        odd.push_back(even[i]);
    }

    for (int i = 0; i < odd.size(); i++) {
        cout << odd[i] << " ";
    }

    return 0;
}