#include <iostream>
#include <vector>

using namespace std;
int main() {
	int shorter = 1, longer = 2, k = 3;

	vector<int> highsun;
	int pre = -1;
	if (k != 0) {
		for (int i = 0; i <= k; i++) {
			int temp = longer * i + shorter * (k - i);
			if (temp != pre) {
				highsun.push_back(temp);
				pre = temp;
			}
		}
	}

	for (int i = 0; i < highsun.size(); i++) {
		cout << highsun[i] << " ";
	}
	
	return 0;
}