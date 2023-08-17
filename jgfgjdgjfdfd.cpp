// Lucky Division
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
	ll num = (1 << 3);
	vi v;
	for (int i = 1; i <= 3; i++) {
		for (int j = 0; j < (1 << i); j++) {
			string s;
			ll temp = j;
			for (int k = 0; k < i; k++) {
				if (temp & 1) {
					s.pb('7');
				}
				else {
					s.pb('4');
				}
				temp >>= 1;
			}
			ll num = stoi(s);
			v.pb(num);
		}
	}
	bool chk = false;
	for (int i = 0; i < v.size(); i++) {
		if (n % v[i] == 0) {
			chk = true;
			break;
		}
	}
	if (chk) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}



	return 0;
}