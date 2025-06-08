#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	vector<int> nums1 = {4,9,5}, nums2 = {9,4,9,8,4};

	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());

	int n1 = nums1.size(), n2 = nums2.size();
	int i = 0, j = 0;
	vector<int> subset = {};
	while (i < n1 && j < n2) {
		if (nums1[i] == nums2[j]) {
			subset.push_back(nums1[i]);
			i++;
			j++;
		} else if (nums1[i] > nums2[j]) {
			j++;
		} else {
			i++;
		}
	}

	for (int k = 0; k < subset.size(); k++)
		cout << subset[k] << " ";
	return 0;
}