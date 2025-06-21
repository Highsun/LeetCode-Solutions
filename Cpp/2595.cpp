#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n = 50;

	vector<int> binary;
	while (n != 0) {
		int temp = n % 2;
		binary.push_back(temp);
		n /= 2;
	}
	int even = 0, odd = 0;
	for (int i = 0; i < binary.size(); i++) {
		if (i % 2 == 0 && binary[i]) even++;
		if (i % 2 == 1 && binary[i]) odd++;
	}
	vector<int> answer;
	answer.push_back(even);
	answer.push_back(odd);

	for (int i = 0; i < 2; i++) {
		cout << answer[i] << " ";
	}
	return 0;
}