#include<iostream>
#include<cmath>
#include<unordered_map>
#include<stack>

using namespace std;
int main() {
	unordered_map<int, char> map = {
		{1, 'I'}, {5, 'V'}, {10, 'X'}, {50, 'L'}, {100, 'C'}, {500, 'D'}, {1000, 'M'}
	};

	int num;
	cin >> num;
	stack<char> roma;
	int pos = 1;
	while (num != 0) {
		int cnt = num % 10;
		int res = cnt;
		if (cnt == 4) {
			roma.push(map[pow(10, (pos - 1)) * 5]);
			roma.push(map[pow(10, (pos - 1))]);
		} else if (cnt == 9) {
			roma.push(map[pow(10, pos)]);
			roma.push(map[pow(10, (pos - 1))]);
		} else if (cnt == 5){
			roma.push(map[pow(10, (pos - 1)) * 5]);
		} else if (cnt < 4) {
			while (res != 0) {
				roma.push(map[pow(10, (pos - 1))]);
				res--;
			}
		} else if (cnt > 5 && cnt < 9) {
			res -= 5;
			while (res != 0) {
				roma.push(map[pow(10, (pos - 1))]);
				res--;
			}
			roma.push(map[pow(10, (pos - 1)) * 5]);
		}
		num /= 10;
		pos++;
	}

	while (!roma.empty()) {
		cout << roma.top();
		roma.pop();
	}
	return 0;
}