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
	string ref = "abcdefgh";
	string s1 = "101";
	int ind = 3;
	string s = "bbdcaaaa";
	vector<char> v;
	for (auto x : s) {
		v.pb(x);
	}
	int tempind = 0;
	ll res = 0;
	set<int> sett;
	for (int i = 0; i < ind; i++) {
		if (s1[i] == '1') {
			for (int j = v.size() / 2; j < v.size(); j++) {
				if (v[j] != ref[tempind]) {
					res++;
				}
			}
			int sz = v.size();
			for (int j = sz / 2 ; j < sz; j++) {
				v.erase(v.begin() + (sz / 2));
			}
			tempind++;
			for (auto x : v) {
				cout << x << " ";
			}
			cout << endl;
			cout << res << endl;
		}
		else {
			for (int j = 0; j < v.size() / 2; j++) {
				if (v[j] != ref[tempind]) {
					res++;
				}
			}
			int sz = v.size();
			for (int j = 0; j < sz / 2; j++) {
				v.erase(v.begin());
			}
			for (auto x : v) {
				cout << x << " ";
			}
			cout << endl;
			cout << res << endl;
		}

	}
	for (auto x : sett) {
		cout << x << endl;
		break;
	}


	return 0;
}