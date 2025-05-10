#include<iostream>
#include<string>

using namespace std;

string rle(const string& raw) {
	string after;
	char temp = raw[0];
	int times = 1;
	for (int i = 1; i < raw.size(); i++) {
		if (temp == raw[i]) {
			times ++;
			continue;
		} else {
			after += to_string(times) + temp;
			times = 1;
		}
		temp = raw[i];
	}
	after += to_string(times) + temp;
	
	return after;
}

string countAndSay(int n) {
	if (n == 1) return "1";
	return rle(countAndSay(n - 1));
}

int main() {
	int n;
	cin >> n;
	cout << countAndSay(n);
	return 0;
}