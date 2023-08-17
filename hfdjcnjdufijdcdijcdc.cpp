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
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		ll num2 = (n * n * 1LL);
		ll num1 = 1;
		vector<vector<int>> v(n, vector<int> (n, 0));
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				for (int j = 0; j < n; j++) {
					if (j % 2 == 0) {
						v[i][j] = num1;
						num1++;
					}
					else {
						v[i][j] = num2;
						num2--;
					}
				}
			}
			else {
				for (int j = n - 1; j >= 0; j--) {
					if (j % 2 == 0) {
						v[i][j] = num2;
						num2--;
					}
					else {
						v[i][j] = num1;
						num1++;
					}
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
	}


	return 0;
}