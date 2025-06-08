#include<iostream>
#include<string>

using namespace std;

int main() {
	vector<string> words = {"a","b","c","ab","bc","abc"};
	string s = "abc";

	int cnt = 0;
	for (int i = 0; i < words.size(); i++) {
		string prefix = words[i];
		int n = prefix.size();
		if (n > s.size()) continue;
		else {
			int flag = 1;
			for (int j = 0; j < n; j++) {
				if (prefix[j] != s[j]) {
					flag = 0;
					break;
				}
			}
			if (flag) cnt++;
		}
	}

	cout << cnt;
	return 0;
}