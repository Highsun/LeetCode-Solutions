#include <iostream>

bool is_pow_2(int n) {
	if (n <= 0) return false;
	if (n == 1) return true;
	if (n % 2 == 0) return is_pow_2(n / 2);
	else return false;
}

int main() {
	int n = 6;

	bool result = is_pow_2(n);
	std::cout << result << '\n';

	return 0;
}