#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
	vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

	int n = height.size();
	vector<int> left_max(n);
	vector<int> right_max(n);

	left_max[0] = height[0];
	for (int i = 1; i < n; i++)
		left_max[i] = max(left_max[i-1], height[i]);
	right_max[n-1] = height[n-1];
	for (int i = n - 2; i >= 0; i--)
		right_max[i] = max(right_max[i+1], height[i]);

	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += min(left_max[i], right_max[i]) - height[i];

	cout << sum;
	return 0;
}