int maximumpoints(vector<vector<int> > arr, int n, int x, int y) {
	// code here
	vector<vector<int>> dp(2002, vector<int>(0));
	for (auto i : arr) {
		dp[i[0]].push_back(i[1]);
	}
	int an = 0;
	int l = 1, r =  x;
	vector<int> vect(1001, 0);
	for (int i = 1; i <= r; i++) {
		for (auto k : dp[i]) {
			vect[k]++;
		}
	}
	for (int i = x + 1 ; i <= 1000 ; i++) {
		for (auto k : dp[i]) {
			vect[k]++;
		}
		int ans = 0;
		for (int j = 1; j <= y; j++) {
			ans = ans + vect[j];
		}
		an = max(ans, an);
		for (int j = y + 1; j <= 1000; j++) {
			ans = ans + vect[j];
			an = max(ans, an);
			ans = ans - vect[j - y];

		}
		an = max(ans, an);

		for (auto k : dp[i - x]) {
			vect[k]--;
		}
	}
	return an;
}