#include<iostream>
#include<cstring>

using namespace std;

void append(string& word) {
	string subfix = "";
	for (int i = 0; i < word.size(); i++) {
		if (word[i] == 'z') subfix += 'a';
		else subfix += word[i] + 1;
	}
	word += subfix;
}

int main() {
	int k = 10;

	string word = "a";
	int pos = k;
	while (pos != 0) {
		append(word);
		pos /= 2;
	}

	cout << word[k-1];
	// cout << endl << word;
	return 0;
}