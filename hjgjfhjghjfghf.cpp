#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
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
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	ll n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	string res = s;
	for (int i = 0; i <= n - k; i++) {
		string temp = s;
		reverse(temp.begin() + i, temp.begin() + i + k);
		res = min(res, temp);
	}
	cout << res << endl;


	return 0;
}