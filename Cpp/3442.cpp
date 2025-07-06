#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int main() {
	string s = "aaaaabbc";

	vector<int> cnt(26, 0);
	for (int i = 0; i < s.size(); i++) {
		cnt[s[i] - 97]++;
	}
	int max_time = -1, min_time = 101;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] % 2 == 1 && cnt[i] > max_time) max_time = cnt[i];
		if (cnt[i] % 2 == 0 && cnt[i] < min_time && cnt[i] > 0) min_time = cnt[i];
	}

	cout << max_time - min_time;
	return 0;
}