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

ll f(ll n) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}
	ll ans = 0;
	for (int i = 1; i <= 3; i++) {
		ans += f(n - i);
	}
	return ans;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n; // 4 X n
	ll ctr = 0;
	cout << f(n) << endl;


	return 0;
}