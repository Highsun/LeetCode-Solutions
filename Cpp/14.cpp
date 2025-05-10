#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main() {
	vector<string> strs;
	strs = {"flower","flow","flight"};

	string head = "";
	for (int i = 0; i < strs.size() - 1; i++) {
		string a = strs[i].size() > strs[i+1].size() ? strs[i] : strs[i+1]; // longer string
		string b = strs[i].size() > strs[i+1].size() ? strs[i+1] : strs[i]; // shorter string
		for (int j = 0; j < b.size(); j++) {
			if (a[j] == b[j]) {
				head += b[j];
			} else {
				break;
			}
		}
		strs[i+1] = head;
		head = "";
	}
	cout << strs[strs.size() - 1];
	return 0;
}