#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> arr = {1,2,34,3,4,5,7,23,12};

	int cnt = 0;
	bool flag = false;
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] % 2 == 1) cnt++;
		else cnt = 0;
		if (cnt == 3) {
			flag = true;
			break;
		}
	}
	cout << flag;

	return 0;
}