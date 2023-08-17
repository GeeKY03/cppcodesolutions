#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int> favIdx;
	int n; cin >> n;
	char fav; cin >> fav;
	string s; cin >> s;
	for (int i = 0; i < n; i++) {
		if (s[i] == fav)
			favIdx.push_back(i);
	}
	for (auto x : favIdx) {
		cout << x << " ";
	}
	cout << endl;

	int len = favIdx.size() - 1;
	int idx = len / 2;
	int ans = 0;
	for (int i = 0; i <= len; i++) {
		if (i != idx)
			ans += abs(favIdx[idx] - favIdx[i]) - abs(i - idx);
	}
	cout << ans << "\n";
	return 0;

}