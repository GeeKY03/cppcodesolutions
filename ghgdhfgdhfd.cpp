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
	ll t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		ll n = s.size();
		if (s[1] == 'a') {
			cout << s[0] << " " << s[1] << " ";
			for (int i = 2; i < n; i++) {
				cout << s[i];
			}
			cout << endl;
		}
		else {
			cout << s[0] << " ";
			for (int i = 1; i < n - 1; i++) {
				cout << s[i];
			}
			cout << " " << s[n - 1] << endl;
		}
	}


	return 0;
}