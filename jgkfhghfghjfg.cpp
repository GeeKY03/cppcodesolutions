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

map<ll, list<ll>> l;
vector<ll> dist(100000 + 5);
vector<double> prob(100000 + 5);
vector<ll> v;
ll n;

void BFS(ll src) {
	for (int i = 1; i <= n; i++) {
		dist[i] = INT_MAX;
	}
	queue<int> q;
	q.push(src);
	dist[src] = 0;
	prob[src] = 1;
	while (!q.empty()) {
		ll node = q.front();
		q.pop();
		for (auto nbr : l[node]) {
			if (dist[nbr] == INT_MAX) {
				dist[nbr] = dist[node] + 1;
				if (node == 1) {
					prob[nbr] = prob[node] / (l[node].size());
				}
				else {
					prob[nbr] = prob[node] / (l[node].size() - 1);
				}
				q.push(nbr);
			}
			if (l[node].size() == 1) {
				v.pb(node);
			}
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}
	BFS(1);
	double res = 0.0;
	double sz = v.size() * 1.0;
	for (double x : v) {
		res += double(double(dist[x]) * double(prob[x]));
	}
	cout << fixed << setprecision(10) << res << endl;
	// for (auto x : l) {
	// 	cout << x.ff << ": ";
	// 	for (auto y : l[x.ff]) {
	// 		cout << y << " ";
	// 	}
	// 	cout << endl;
	// }


	return 0;
}