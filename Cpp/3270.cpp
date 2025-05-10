#include<iostream>
#include<vector>

using namespace std;

vector<int> add_prior(int num) {
	vector<int> num_arr = {0, 0, 0, 0};
	for (int i = 0; i < 4; i++) {
		num_arr[3 - i] = num % 10;
		num /= 10;
	}
	return num_arr;
}

int min(int a, int b, int c) {
	int temp = (a > b) ? b : a;
	int min_num = (temp > c) ? c : temp;
	return min_num;
}

int main() {
	int num1 = 987, num2 = 879, num3 = 798;

	vector<int> num_arr1 = add_prior(num1);
	vector<int> num_arr2 = add_prior(num2);
	vector<int> num_arr3 = add_prior(num3);

	vector<int> result_arr = {0, 0, 0, 0};
	for (int i = 0; i < 4; i++)
		result_arr[i] = min(num_arr1[i], num_arr2[i], num_arr3[i]);

	int result = result_arr[0] * 1000 + result_arr[1] * 100 + result_arr[2] * 10 +result_arr[3];
	cout << result;
	return 0;
}