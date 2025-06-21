#include<iostream>
#include<string>

using namespace std;

int get_k_sub_number(int num, int pos, int k) {
    string temp = to_string(num);
    
    // if (pos - 1 + k > temp.size()) return -1;

    string substr = temp.substr(pos - 1, k);
    int sub =  stoi(substr);
    return sub;
}

int main() {
	int num = 430043;
	int k = 2;

	int length = 0;
	int n = num;
	do {
		length++;
		n /= 10;
	} while (n != 0);

	int cnt = 0;
	for (int i = length; i > k - 1; i--) {
		int sub = get_k_sub_number(num, length - i + 1, k);
		if (sub != 0 && num % sub == 0) cnt++;
	}

	cout << cnt;

	return 0;
}