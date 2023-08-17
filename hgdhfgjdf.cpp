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
		string s;
		cin >> s;
		int ctr = 0;
		bool chk = false;
		for (int i = 2; i < s.size(); i++) {
			if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u')) {
				ctr++;
			}
			if ((s[i - 1] == 'a') || (s[i - 1] == 'e') || (s[i - 1] == 'i') || (s[i - 1] == 'o') || (s[i - 1] == 'u')) {
				ctr++;
			}
			if ((s[i - 2] == 'a') || (s[i - 2] == 'e') || (s[i - 2] == 'i') || (s[i - 2] == 'o') || (s[i - 2] == 'u')) {
				ctr++;
			}
			if (ctr == 3) {
				chk = true;
				break;
			}

			ctr = 0;
		}
		if (chk) {
			cout << "Happy" << endl;
		}
		else {
			cout << "Sad" << endl;
		}
	}


	return 0;
}