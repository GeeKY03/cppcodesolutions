#include<bits/stdc++.h>
using namespace std;
#define int long long


void Solve() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (auto &i : a)cin >> i;
	for (auto &i : b)cin >> i;
	int sum1 = accumulate(a.begin(), a.end(), 0);
	int sum2 = accumulate(b.begin(), b.end(), 0);
	if (sum1 == sum2) {
		cout << 0 << endl;
		return;
	}
	if (sum2 < sum1) {
		swap(sum1, sum2);
		swap(n, m);
		swap(a, b);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());
	int op = 0, i = 0, j = 0;
	while (i < n && j < m) {
		int x = 6 - a[i], y = b[j] - 1;
		if (x > y) {
			sum1 += x;
			i++;
			if (sum1 >= sum2) {
				cout << op + 1 << endl;
				return;
			}
		}
		else {
			sum2 -= y;
			j++;
			if (sum1 >= sum2) {
				cout << op + 1 << endl;
				return;
			}
		}
		op++;
	}
	cout << "-1\n";
}



int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T = 1;
	// cin>>T;
	while (T--) {
		Solve();
	}
	return 0;
}