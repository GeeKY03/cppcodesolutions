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
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		string s;
		cin >> s;
		stack <char> st;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'Q') {
				st.push('Q');
			}
			else {
				if (st.size() == 0) {
					continue;
				}
				else {
					st.pop();
				}
			}
		}
		if (st.size() > 0) {
			cout << "No" << endl;
		}
		else {
			cout << "Yes" << endl;
		}
	}


	return 0;
}