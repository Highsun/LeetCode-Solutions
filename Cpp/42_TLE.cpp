#include <iostream>
#include <vector>

using namespace std;

vector<int> cut_head_and_tail(vector<int> raw) {
    int head_0 = 0, tail_0 = 0;

    while (head_0 < raw.size() && raw[head_0] == 0)
        head_0++;
    while (tail_0 < raw.size() && raw[raw.size() - 1 - tail_0] == 0)
        tail_0++;

    if (head_0 + tail_0 >= raw.size())
        return {};
    return vector<int>(raw.begin() + head_0, raw.end() - tail_0);
}

vector<int> cut_min(vector<int> raw) {
    int min_h = 100001;
    for (int i = 0; i < raw.size(); i++)
        if (raw[i] < min_h)
            min_h = raw[i];
    for (int i = 0; i < raw.size(); i++)
        raw[i] -= min_h;
    return raw;
}

bool check(vector<int> arr) {
    if(!arr.empty() && (arr[0] == 0 || arr.back() == 0))
        return false;
    return true;
}

vector<int> initialize(vector<int> raw) {
    do {
        raw = cut_head_and_tail(raw);
        raw = cut_min(raw);
    } while (!check(raw));
    return raw;
}

bool is_valid(vector<int> arr) {
    if (arr.empty())
        return false;
    for (int i = 1; i < arr.size() - 1; i++) {
        if (arr[i] == 0)
            return true;
    }
    return false;
}

int main() {
	vector<int> height = {2,1,2,6,9,7,5,5,7};

	int cnt = 0;
	height = initialize(height);
	while (is_valid(height)) {
		for (int i = 0; i < height.size(); i++) {
			if (height[i] == 0) cnt++;
			if (height[i] > 0) height[i]--;
		}
		height = initialize(height);
	}

	cout << cnt;
	return 0;
}