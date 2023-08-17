#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);


void sub_gen(ll q, vector<string>  &v) {
	ll num = (1 << q);
	for (int i = 1; i <= num; i++) {
		string s;
		ll x = i;
		for (int j = 0; j < q; j++) {
			if (x & 1) {
				s.pb('1');
			}
			else {
				s.pb('0');
			}
			x >>= 1;
		}
		reverse(s.begin(), s.end());
		v.pb(s);
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	vector<string> v;
	string s1, s2;
	cin >> s1 >> s2;
	int n = s2.size();
	ll o1 = 0, z1 = 0;
	ll o2 = 0, z2 = 0;
	ll q = 0;
	for (int i = 0; i < n; i++) {
		if (s1[i] == '+') {
			o1++;
		}
		else if (s1[i] == '-') {
			z1++;
		}
		if (s2[i] == '+') {
			o2++;
		}
		else if (s2[i] == '-') {
			z2++;
		}
		else {
			q++;
		}
	}
	double ans = 0;
	ll oreq = o1 - o2;
	ll zreq = z1 - z2;
	if ((oreq < 0) || (zreq < 0)) {
		ans = 0;
	}
	else if ((oreq == 0) && (zreq == 0)) {
		ans = 1;
	}
	else {
		ll ctr = 0;
		sub_gen(q, v);
		ll tot = v.size();
		for (auto x : v) {
			string s = x;
			ll oc = 0, zc = 0;
			for (int i = 0; i < q; i++) {
				if (s[i] == '1') {
					oc++;
				}
				else {
					zc++;
				}
			}
			// cout << zc << " " << oc << endl;
			if ((zc == zreq) || (oc == oreq)) {
				ctr++;
			}
		}
		ans = (float)ctr / tot;
	}
	cout << fixed << setprecision(20) << ans << endl;


	return 0;
}