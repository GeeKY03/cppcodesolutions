#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

struct CustomComparator {
	bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) {
		// First element in descending order
		if (p1.first != p2.first)
			return p1.first < p2.first;

		// Second element in ascending order
		return p1.second > p2.second;
	}
};

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		priority_queue<pair<int, int>, vector<pair<int, int>>, CustomComparator> pq;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if (x % k == 0) {
				pq.push({k, i + 1});
			}
			else {
				pq.push({x % k, i + 1});
			}
		}
		vector<int> res;
		while (!pq.empty()) {
			pair<int, int> p = pq.top();
			pq.pop();
			if (p.ff - k > 0) {
				pq.push({p.ff - k, p.ss});
			}
			else {
				res.push_back({p.ss});
			}
		}
		for (auto x : res) {
			cout << x << " ";
		}
		cout << endl;
	}


	return 0;
}