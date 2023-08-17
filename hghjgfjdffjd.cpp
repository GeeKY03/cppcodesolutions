#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int calculate_probability(int n, int k, vector<int>& levels) {
	if (k < n) {
		return 0;
	}
	if (k == n) {
		return (long long)levels[0] * levels[1] % MOD;
	}
	int prev1 = levels[0];
	int prev2 = (long long)levels[0] * levels[1] % MOD;
	for (int i = n; i < k; i++) {
		int curr1 = ((long long)prev1 * levels[0] % MOD + (long long)prev2 * levels[1] % MOD) % MOD;
		int curr2 = (long long)prev1 * levels[1] % MOD;
		prev1 = curr1;
		prev2 = curr2;
	}
	return prev2;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> levels(2);
	for (int i = 0; i < 2; i++) {
		cin >> levels[i];
	}
	cout << calculate_probability(n, k, levels) << endl;
	return 0;
}
