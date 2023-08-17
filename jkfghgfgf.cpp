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
	vector<string> arr;
	ll num = (1 << 11) - 1;
	for (int i = 0; i <= num; i++) {
		ll temp = i;
		string s;
		for (int i = 0; i < 10; i++) {
			if (temp & 1) {
				s.pb('1');
			}
			else {
				s.pb('0');
			}
			temp >>= 1;
		}
		arr.pb(s);
	}
	for (auto x : arr) {
		cout << '"' << x << '"' << ',';
	}

	return 0;
}