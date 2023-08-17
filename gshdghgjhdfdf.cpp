#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, m, l;
	cin >> n >> m >> l;
	vlli v;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v.pb(x);
	}
	ll temp = m;
	ll ctr = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] > l) {
			for (int j = i; j < n; j++) {
				if (v[j] <= l) {
					ctr++;
					i = j ;
					break;
				}
				if (j == n - 1) {
					ctr++;
					i = n - 1;
				}
			}
		}
	}
	while (temp--) {
		// for (auto x : v) {
		// 	cout << x << " ";
		// }
		// cout << endl;
		ll a;
		cin >> a;
		if (a == 0) {
			cout << ctr << endl;
		}
		else {
			ll b, c;
			cin >> b >> c;
			// v[b - 1] += c;
			if (n == 1) {
				if (v[b - 1] > l) {
					v[b - 1] += c;
				}
				else {
					if ((v[b - 1] + c) <= l) {
						v[b - 1] += c;
					}
					else {
						ctr++;
						v[b - 1] += c;
					}
				}
			}
			else {
				if (v[b - 1] <= l) {
					if ((v[b - 1] + c) <= l) {
						v[b - 1] += c;
					}
					else if ((v[b - 1] + c) > l) {
						if (b == 1) {
							if (v[b] > l) {
								v[b - 1] += c;
							}
							else {
								v[b - 1] += c;
								ctr++;
							}
						}
						else if (b == n) {
							if (v[b - 2] > l) {
								v[b - 1] += c;
							}
							else {
								v[b - 1] += c;
								ctr++;
							}
						}
						else {
							if (v[b - 1] > l) {
								v[b - 1] += c;
							}
							else {
								if ((v[b - 2] > l) && (v[b] > l)) {
									ctr--;
									v[b - 1] += c;
								}
								else if ((v[b - 2] <= l) && (v[b] <= l)) {
									ctr++;
									v[b - 1] += c;
								}
								else {
									v[b - 1] += c;
								}
							}
						}
					}
				}
				else {
					v[b - 1] += c;
				}
			}
		}
	}


	return 0;
}