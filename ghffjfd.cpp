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

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll s, d;
	cin >> s >> d;
	if (9 * d == s) {
		cout << -1 << endl;
	}
	else {
		vector<int> num(d, 0);
		num[0] = 1;
		s--;
		num[d - 1] = 1;
		s--;
		for (int i = d - 1; i >= 0; i--) {
			if (s > 0) {
				if (s >= 9 - num[i]) {
					s -= 9 - num[i];
					num[i] = 9;
				}
				else {
					num[i] += s;
					s = 0;
				}
			}
			else {
				break;
			}
		}
		ll ind = 0;
		for (int j = d - 1; j >= 0; j--) {
			if (num[j] != 9) {
				ind = j;
				break;
			}
		}
		if (ind == d - 1) {
			num[ind]--;
			num[ind - 1]++;
		}
		else {
			num[ind]++;
			num[ind + 1]--;
		}
		for (auto x : num) {
			cout << x;
		}
	}


	return 0;
}