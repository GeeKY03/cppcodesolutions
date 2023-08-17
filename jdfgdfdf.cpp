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

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	vi v;
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		sum += x;
		v.pb(sum);
	}
	ll pc = 0;
	for (int i = 0; i < n; i++) {
		ll a = v[i] / m;
		cout << a << " ";
		pc = v[i] / m;
	}
	cout << endl;


	return 0;
}