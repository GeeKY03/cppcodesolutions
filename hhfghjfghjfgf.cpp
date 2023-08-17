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
	ll temp = 11;
	ll temp1 = temp;
	string s;
	while (temp1 > 0) {
		if (temp1 & 1) {
			s.pb('1');
		}
		else {
			s.pb('0');
		}
		temp1 >>= 1;
	}
	reverse(all(s));
	cout << s << endl;
	for (int i = temp; i <= 12; i++) {
		temp = (temp & i);
	}
	cout << temp << endl;
	s = "";
	while (temp > 0) {
		if (temp & 1) {
			s.pb('1');
		}
		else {
			s.pb('0');
		}
		temp >>= 1;
	}
	reverse(all(s));
	cout << s << endl;
	cout << (11 & 12 & 13 & 14) << endl;

	return 0;
}