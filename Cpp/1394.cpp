#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> arr = {1,2,2,3,3,3};
	
	vector<int> flag(501, 0);
	for (int i = 0; i < arr.size(); i++) {
		flag[arr[i]]++;
	}
	int lucky_num = -1;
	for (int i = 1; i < 501; i++) {
		if (flag[i] == i && i > lucky_num) lucky_num = i;
	}

	cout << lucky_num;
	return 0;
}