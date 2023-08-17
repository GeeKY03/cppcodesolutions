#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

vector<ll> b, c;


int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		b.pb(x);
	}
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		c.pb(x);
	}
	ll p, q, r;
	cin >> p >> q >> r;




	return 0;
}