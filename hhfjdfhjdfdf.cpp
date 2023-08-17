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
	vi v;
	ll ans = 0;
	for (int i = 1; i <= n; i++) {
		v.pb(i);
		ans += (i * (i - 1));
	}
	vi cost;
	cost.pb(ans);
	ans = 0;



	return 0;
}