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
	string s;
	cin >> s;
	ll n = s.size();
	string str;
	for (int i = 0; i < n; i++) {
		if ((s[i] == '[') || (s[i] == ']')) {
			continue;
		}
		else {
			str.pb(s[i]);
		}
	}
	reverse(all(str));
	string res;
	for (int i = 0; i < str.size(); i++) {
		if ((str[i] >= 48) && (str[i] <= 57)) {
			ll num = str[i] - 48;
			num--;
			string temp = res;
			while (num--) {
				res += temp;
			}
		}
		else {
			res.pb(str[i]);
		}
	}
	reverse(all(res));
	cout << res << endl;


	return 0;
}