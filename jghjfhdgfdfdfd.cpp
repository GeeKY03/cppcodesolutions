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
	int t;
	cin >> t;
	while (t--) {
		set<char> sett;
		for (int i = 0; i < 4; i++) {
			char a;
			cin >> a;
			sett.insert(a);
		}
		if (sett.size() == 4) {
			cout << 3 << endl;
		}
		else if (sett.size() == 3) {
			cout << 2 << endl;
		}
		else if (sett.size() == 2) {
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}


	return 0;
}