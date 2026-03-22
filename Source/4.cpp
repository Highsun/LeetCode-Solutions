#include <iostream>
#include <ostream>
#include <vector>

int main() {
    std::vector<int> nums1 = {1, 3};
    std::vector<int> nums2 = {2, 4};

    std::vector<int> merge;
    int              i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            merge.push_back(nums1[i]);
            ++i;
        } else {
            merge.push_back(nums2[j]);
            ++j;
        }
    }
    if (i == nums1.size()) {
        while (j < nums2.size()) {
            merge.push_back(nums2[j]);
            ++j;
        }
    }
    if (j == nums2.size()) {
        while (i < nums1.size()) {
            merge.push_back(nums1[i]);
            ++i;
        }
    }

    // debug output
    // for (auto item : merge) std::cout << item << " ";
    // std::cout << std::endl;

    int    n = merge.size();
    double median;
    if (n % 2 == 0) {
        median = (merge[n / 2 - 1] + merge[n / 2]) / 2.0;
    } else {
        median = merge[n / 2];
    }

    std::cout << median << std::endl;

    return 0;
}