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
	ll t;
	cin >> t;
	while (t--) {
		ll n, x, y;
		cin >> n >> x >> y;
		string s1, s2;
		cin >> s1 >> s2;
		ll diff = 0;
		for (int i = 0; i < n; i++) {
			if (s1[i] != s2[i]) {
				diff++;
			}
		}
		ll ans = 0;
		if (diff & 1) {
			ans = -1;
		}
		else {
			ll cost = 0;
			if (x == (y * 2LL)) {
				for (int i = 0; i < n; i++) {
					if (s1[i] != s2[i]) {
						for (int j = i + 1; j < n; j++) {
							if (s1[j] != s2[j]) {
								s1[j] = s2[j];
								s1[i] = s2[i];
								if (i + 1 == j) {
									cost += x;
								}
								else {
									cost += y;
								}
								break;
							}
						}
					}
				}
			}
			else if (x > (y * 2LL)) {
				if (s1[n - 1] == s2[n - 1]) {
					for (int i = 0; i < n; i++) {
						if (s1[i] != s2[i]) {
							if (((i + 1) == (n - 1))) {
								s1[i] = s2[i];
								cost += x;
							}
							else {
								s1[i] = s2[i];
								cost += y;
							}
						}
					}
				}
				else {
					ll fset = -1;
					ll ldiff = 0;
					for (int i = n - 1; i >= 0; i--) {
						if (s1[i] == s2[i]) {
							fset = i;
							break;
						}
						else {
							ldiff++;
						}
					}
					ll ctr = 0;
					if (fset == -1) {
						cost += ((n / 2) * y) + x;
					}
					else {
						if (ldiff & 1) {
							ctr = diff - ldiff - 1;
						}
						else {
							ctr = diff - ldiff;
						}
						for (int i = 0; i < n; i++) {
							if ((s1[i] != s2[i]) && (ctr != 0)) {
								if (i + 1 == fset) {
									s1[i] = s2[i];
									cost += x;
								}
								else {
									cost += y;
								}
								ctr--;
							}
							else if ((s1[i] != s2[i]) && (ctr == 0)) {
								for (int j = n - 1; j > i; j--) {
									if (s1[j] != s2[j]) {
										if (i + 1 == j) {
											s1[i] = s2[i];
											s1[j] = s2[j];
											cost += x;
										}
										else {
											s1[i] = s2[i];
											s1[j] = s2[j];
											cost += y;
										}
									}
								}
							}
						}
					}

				}
			}
			else {
				for (int i = 0; i < n; i++) {
					if (s1[i] != s2[i]) {
						for (int j = i + 1; j < n; j++) {
							if (s1[j] != s2[j]) {
								s1[i] = s2[i];
								s1[j] = s2[j];
								if (i + 1 != j) {
									cost += y;

								}
								else {
									cost += x;
								}
								break;
							}
						}
					}
				}
			}
			ans = cost;
		}
		// cout << s1 << " " << s2 << endl;
		cout << ans << endl;
	}



	return 0;
}