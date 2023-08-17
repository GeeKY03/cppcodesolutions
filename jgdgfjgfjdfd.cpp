#include<bits/stdc++.h>
using namespace std;
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

ll binexp(ll a, ll b /*,ll m */) {

	ll res = 1;
	// a%=m;
	while (b > 0) {
		if (b & 1) {
			res = res * a /* %m*/ ;
		}
		a = a * a /* %m */ ;
		b >>= 1;
	}
	return res;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	string s = "11";
	ll num = 0;
	reverse(s.begin(), s.end());
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') {
			num += binexp(2, i);
		}
	}
	cout << s << " ";
	cout << num << endl;
	while (num != 1) {
		if (num & 1) {
			num++;
		}
		else {
			num /= 2;
		}
		ll temp = num;
		string tp;
		while (temp > 0) {
			if (temp & 1) {
				tp.pb('1');
			}
			else {
				tp.pb('0');
			}
			temp >>= 1;
		}
		reverse(tp.begin(), tp.end());
		cout << tp << " " << num << endl;
	}


	return 0;
}