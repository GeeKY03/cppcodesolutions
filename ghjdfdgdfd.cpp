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
	string s;
	cin >> s;
	ll n = s.size();
	ll o = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			o++;
		}
	}
	bool one = false;
	ll ctr = 0;
	for (int i = n - 1; i >= 0; i--) {
		if ((s[i] == '0') && (one == true)) {
			ctr++;
		}
		else if ((s[i] == '1')) {
			if (one == true) {
				for (int j = i; j >= 0; j--) {
					if (s[j] == '0') {
						i = j;
						ctr++;
						break;
					}
					if (j == 0) {
						ctr++;
						i = j;
					}
				}
			}
			else  {
				for (int j = i; j >= 0; j--) {
					if (s[j] == '0') {
						i = j;
						ctr++;
						break;
					}
				}
				one = true;
			}
		}
	}
	if (s == "1") {
		cout << 0 << endl;
	}
	else if (o == 1) {
		cout << n - 1 << endl;
	}
	else {
		cout << ctr + n << endl;
	}

	return 0;
}