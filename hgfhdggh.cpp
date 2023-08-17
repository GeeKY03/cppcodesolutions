vector < int > binaryQueries(int n, vector < int > & a, int q, vector < vector < int >> & queries) {
	// Write your code here.
	vector < int > res;
	for (const auto & query : queries) {
		int left = query[0];
		int right = query[1];
		int x = query[2];
		for (int i = left; i <= right; i++) {
			a[i] ^= x;
		}
		int orResult = a[left];
		for (int i = left + 1; i <= right; i++) {
			orResult |= a[i];
		}
		res.push_back(orResult);

	}
	return res;
}