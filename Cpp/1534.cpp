#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool is_good_triplet(int i, int j, int k, int a, int b, int c) {
	bool flag = false;
	if (abs(i - j) <= a && abs(j - k) <= b && abs(i - k) <= c)
		flag = true;
	return flag;
}

int main() {
	vector<int> arr = {1,1,2,2,3};
	int a = 0, b = 0, c = 1;

	int n = arr.size();
	int cnt = 0;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				bool flag = is_good_triplet(arr[i], arr[j], arr[k], a, b, c);
				if (flag) cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}