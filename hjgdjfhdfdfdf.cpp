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
		ll n, k;
		cin >> n >> k;
		string s, alpha = "abcdefghijklmnopqrstuvwxyz";
		cin >> s;
		int arr[25] = {0};
		for (int i = 0; i < n; i++) {
			arr[s[i] - 97]++;
		}
		ll x = n / k;
		for (int j = 0; j < k; j++) {
			bool prt = false;
			for (int i = 0; i < x; i++) {
				if ((arr[i] == 0) && (prt == false)) {
					cout << alpha[i];
					prt = true;
				}
				else if ((i == x - 1) && (prt == false)) {
					cout << alpha[i + 1];
					arr[i]--;
					prt = true;
				}
				else {
					arr[i]--;
				}
			}
		}
		cout << endl;
	}


	return 0;
}