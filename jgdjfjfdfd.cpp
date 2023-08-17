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
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll c1 = 0, c0 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			c1++;
		}
		else {
			c0++;
		}
	}
	ll x = (1 << c1);
	ll y = (1 << n) - (1 << c0) + 1;
	for (int i = x; i <= y; i++) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}