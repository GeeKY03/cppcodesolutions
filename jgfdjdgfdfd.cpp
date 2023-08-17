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

void heapPermutation(vector<ll> a, vector<vector<ll>> &vv, ll size, ll n) {
	// if size becomes 1 then prints the obtained
	// permutation
	if (size == 1) {
		vv.pb(a);
		return;
	}

	for (int i = 0; i < size; i++) {
		heapPermutation(a, vv, size - 1, n);

		// if size is odd, swap 0th i.e (first) and
		// (size-1)th i.e (last) element
		if (size % 2 == 1)
			swap(a[0], a[size - 1]);

		// If size is even, swap ith and
		// (size-1)th i.e (last) element
		else
			swap(a[i], a[size - 1]);
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll sz = binexp(2, n);
	vector<ll> v;
	for (int i = 0; i < sz; i++) {
		v.pb(i + 1);
	}
	vector<vector<ll>> vv;
	heapPermutation(v, vv, sz, sz);
	for (auto x : vv) {
		for (auto y : x) {
			cout << y << " ";
		}
		cout << endl;
	}
	return 0;
}