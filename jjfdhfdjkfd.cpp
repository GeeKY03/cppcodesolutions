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

ll n, m;
ll arr[1000000];
ll seg[2000000];

void Build(ll index, ll ss, ll se) {
	if (ss == se) {
		seg[index] = arr[ss];
		return ;
	}
	ll mid = (se + ss) / 2;
	Build(2 * index, ss, mid);
	Build(2 * index + 1, mid + 1, se);

	ll times = log2(se - ss + 1);
	if (times & 1) {
		seg[index] = (seg[2 * index] | seg[2 * index + 1]);
	}
	else {
		seg[index] = (seg[2 * index] ^ seg[2 * index + 1]);
	}
}

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

void update(ll index, ll ss, ll se, ll nval, ll place) {
	// Not overlapping
	if ((place < ss) || (place > se)) {
		return;
	}
	// Complete Overlapping
	if (ss == se) {
		seg[index] = nval;
	}
	else {
		ll mid = (ss + se) / 2;
		update(2 * index, ss, mid, nval, place);
		update(2 * index + 1, mid + 1, se, nval, place);
		ll times = log2(se - ss + 1);
		if (times & 1) {
			seg[index] = (seg[2 * index] | seg[2 * index + 1]);
		}
		else {
			seg[index] = (seg[2 * index] ^ seg[2 * index + 1]);
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	cin >> n >> m;
	n = binexp(2, n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	Build(1, 0, n - 1);
	while (m--) {
		ll p, b;
		cin >> p >> b;
		p--;
		update(1, 0, n - 1, b, p);
		cout << seg[1] << endl;
	}


	return 0;
}