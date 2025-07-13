#include<iostream>
#include<vector>

using namespace std;

int get_number_sum(int number) {
	int sumup = 0;
	while (number) {
		sumup += number % 10;
		number /= 10;
	}
	return sumup;
}

int main() {
	int lowLimit = 5;
	int highLimit = 15;

	vector<int> flag(46, 0);
	for (int i = lowLimit; i <= highLimit; i++) {
		int this_number = get_number_sum(i);
		flag[this_number]++;
	}
	int max_cnt = 0;
	for (int i = 1; i <= 45; i++) {
		if (flag[i] > max_cnt) max_cnt = flag[i];
	}

	cout << max_cnt;
	return 0;
}