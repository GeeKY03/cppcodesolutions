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
	ll x1, y1, x2, y2;
	ll r;
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> r;
	map <pair<ll, ll>, ll> mp;
	ll temp = r;
	while (temp--) {
		ll x, y, r1;
		cin >> x >> y >> r1;
		mp[ {x, y}] = r1;
	}
	ll ctr = 0;
	set<pair<ll, ll>> st;
	if (x2 > x1) {
		for (int i = x1; i <= x2; i++) {
			st.insert({i, y1});
			st.insert({i, y2});
		}
	}
	else {
		for (int i = x2; i <= x1; i++) {
			st.insert({i, y2});
			st.insert({i, y1});
		}
	}
	if (y1 > y2) {
		for (int i = y2; i <= y1; i++) {
			st.insert({x1, i});
			st.insert({x2, i});
		}
	}
	else {
		for (int i = y1; i <= y2; i++) {
			st.insert({x2, i});
			st.insert({x1, i});
		}
	}

	ll n = mp.size();

	for (auto a : st) {
		ll x, y;
		x = a.first;
		y = a.second;
		ll x1, y1, r1;
		ll ind = 0;
		for (auto b : mp) {
			x1 = b.first.first;
			y1 = b.first.second;
			r1 = b.second;

			double d1 = (x - x1) * (x - x1);
			double d2 = (y - y1) * (y - y1);
			double dist = double(sqrt(double(d1 + d2)));
			if (dist <= r1) {
				break;
			}
			ind++;
			if (ind == n) {
				ctr++;
			}
		}
	}
	cout << ctr << endl;


	return 0;
}