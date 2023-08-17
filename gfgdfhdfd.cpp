#include <iostream>
#include <vector>
using namespace std;

int factor(int n) {
	// returns the number of factors of n
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	return count;
}

int compute_expression(int n) {
	// computes the expression based on the prime factorization of n
	vector<pair<int, int>> factors; // vector of pairs (prime factor, exponent)
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			int count = 0;
			while (n % i == 0) {
				n /= i;
				count++;
			}
			factors.push_back(make_pair(i, count));
		}
	}
	int result = 1;
	for (auto factor : factors) {
		int prime = factor.first;
		int exponent = factor.second;
		int power = (prime == 2) ? exponent + 1 : exponent;
		int term = pow(prime, power) - 1;
		result *= term;
	}
	return result;
}

int main() {
	int n = 36;
	int expression_value = compute_expression(n);
	cout << "The expression value for n=" << n << " is " << expression_value << endl;
	return 0;
}
