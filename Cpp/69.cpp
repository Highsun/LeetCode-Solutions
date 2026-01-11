#include <iostream>

int main() {
	int x = 24;

	// Caution: this is a direct solution which cannot be compiled and executed!
	if (x == 0) return 0;
	else {
		double x_k = 1.0;
		double x_k1 = 0.5 * (x_k + x / x_k);
		while ((int)x_k != (int)x_k1) {
			x_k = x_k1;
			x_k1 = 0.5 * (x_k + x / x_k);
		}
		return (int)x_k1;
	}

	return 0;
}