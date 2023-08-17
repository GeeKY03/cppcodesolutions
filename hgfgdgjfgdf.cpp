#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
// #define endl '\n'
// #define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	// FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	// ll n = 20;
	vi v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 4, 9, 25, 49, 16};
	ll ctr = 0;
	// cout << v.size() << endl;
	for (int i = 0; i < 20; i++) {
		string s;
		cout << v[i] << endl;
		cin >> s;
		if (s == "yes") {
			ctr++;
		}
	}
	if (ctr >= 2) {
		cout << "composite" << endl;
	}
	else {
		cout << "prime" << endl;
	}


	return 0;
}