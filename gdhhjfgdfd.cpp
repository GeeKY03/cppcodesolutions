#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define MOD 1000000009

ll k;
vector<ll> a, b, c;



vector<vector<ll>> Matmulti(vector<vector<ll>> A, vector<vector<ll>> B) {

	vector<vector<ll>> C(k + 1, vector<ll> (k + 1));

	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= k; j++) {
			for (int x = 1; x <= k; x++) {
				C[i][j] = (C[i][j] + (A[i][x] * B[x][j]) % MOD) % MOD;
			}
		}
	}
	return C;
}


vector<vector<ll>> Matexp(vector<vector <ll>> A, ll p) {


	if (p == 1) {
		return A;
	}


	if (p & 1) {
		return Matmulti(A, Matexp(A, p - 1));
	}
	vector<vector<ll>> X = Matexp(A, p / 2);
	return Matmulti(X, X);
}

ll compute(ll n) {

	if (n == 0) {
		return 0;
	}

	if (n <= k) {
		return b[n - 1];
	}

	vector<ll> F1(k + 1);

	for (int i = 1; i <= k; i++) {
		F1[i] = b[i - 1];
	}

	vector<vector<ll>> T(k + 1, vector<ll>(k + 1));
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= k; j++) {
			if (i == k) {
				T[i][j] = c[k - j];
			}
			else {
				if (j == i + 1) {
					T[i][j] = 1;
				}
				else {
					T[i][j] = 0;
				}
			}
		}
	}
	T = Matexp(T, n - 1);
	ll res = 0;
	for (int i = 1; i <= k; i++) {
		res = (res + (T[1][i] * F1[i]) % MOD) % MOD;
	}
	return res;



}


int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	t = 1;
	while (t--) {

		k = 2; // K is already given, no need to compute ;)

		b.pb(1);
		b.pb(1);

		for (int i = 0; i < k; i++) {
			c.pb(1);
			c.pb(1);
		}
		ll n, m;
		cin >> n >> m;
		vlli v;
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			v.pb(x);
			sum += x;
		}
		ll add = 0;
		while (m--) {

			ll w, e, r;
			cin >> w >> e >> r;
			if (w == 1) {
				int ctr = 1;
				for (int i = e; i <= r; i++) {
					v[i - 1] += compute(ctr);
					ctr++;
				}
			}
			else {
				ll qsum = 0;
				for (int i = e; i <= r; i++) {
					qsum = (qsum + v[i - 1]) % MOD;
				}
				cout << qsum << endl;
			}
		}

		b.clear();
		c.clear();
	}


	return 0;
}