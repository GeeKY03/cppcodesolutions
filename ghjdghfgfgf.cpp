#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
	int K, N;
	cin >> K >> N;
	vector<int> R(K);
	for (int i = 0; i < K; i++) {
		cin >> R[i];
	}

	vector<vector<int>> dp(K + 1, vector<int>(N + 1));
	for (int j = 0; j <= N; j++) {
		dp[1][j] = (j > 0) ? 1 : 0;
	}

	for (int i = 2; i <= K; i++) {
		for (int j = 0; j <= N; j++) {
			dp[i][j] = 0;
			for (int t = 0; t <= min(j, i - 1); t++) {
				dp[i][j] += (long long)dp[i - 1][j - t] * R[i - 1] % MOD;
				dp[i][j] %= MOD;
			}
		}
	}

	int ans = 0;
	for (int j = 1; j <= N; j++) {
		ans += dp[K][j];
		ans %= MOD;
	}

	cout << ans << endl;

	return 0;
}
