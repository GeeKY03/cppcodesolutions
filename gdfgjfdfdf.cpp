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
	ll n;
	cin >> n;
	map<ll, ll> mp;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		mp[x]++;
		mp[y]--;
	}
	ll sum = 0, a1 = 0, a2 = 0;
	for (auto x : mp) {
		sum += x.second;
		if (sum > a2) {
			a2 = sum;
			a1 = x.first;
		}
	}
	cout << a1 << " " << a2 << endl;


	return 0;
}