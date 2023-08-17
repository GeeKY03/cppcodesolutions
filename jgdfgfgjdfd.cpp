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

void prime_fact(ll n, vector<int> &v) {
	ll temp = n;
	for (int i = 2; i <= sqrt(n); i++) {
		while (temp % i == 0) {
			temp /= i;
			if (i == 2) {
				v[0]++;
			}
			else if (i == 5) {
				v[1]++;
			}
		}
	}
}



int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll n, k;
		cin >> n >> k;
		vi v1(2, 0);
		prime_fact(n * k, v1);
		cout << v1[0] << " " << v1[1] << endl;
	}


	return 0;
}