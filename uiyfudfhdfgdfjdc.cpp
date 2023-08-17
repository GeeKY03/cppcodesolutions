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
	ll t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		ll n = s.size();
		map<char, ll> frq;
		for (int i = 0; i < n; i++) {
			frq[s[i]]++;
		}
		string res;
		ll arr[10] = {0};
		while (true) {
			if ((frq['o'] > 0) && (frq['n'] > 0) && (frq['e'] > 0)) {
				arr[1]++;
				frq['o']--;
				frq['n']--;
				frq['e']--;
			}
			else if ((frq['t'] > 0) && (frq['w'] > 0) && (frq['o'] > 0)) {
				arr[2]++;
				frq['t']--;
				frq['w']--;
				frq['o']--;
			}
			else if ((frq['t'] > 0) && (frq['h'] > 0) && (frq['r'] > 0) && (frq['e'] > 1)) {
				arr[3]++;
				frq['t']--;
				frq['h']--;
				frq['r']--;
				frq['e'] -= 2;
			}
			else if ((frq['f'] > 0) && (frq['o'] > 0) && (frq['r'] > 0) && (frq['u'] > 0)) {
				arr[4]++;
				frq['f']--;
				frq['o']--;
				frq['r']--;
				frq['u']--;
			}
			else if ((frq['f'] > 0) && (frq['i'] > 0) && (frq['v'] > 0) && (frq['e'] > 0)) {
				arr[5]++;
				frq['f']--;
				frq['i']--;
				frq['v']--;
				frq['e']--;
			}
			else if ((frq['s'] > 0) && (frq['i'] > 0) && (frq['x'] > 0)) {
				arr[6]++;
				frq['s']--;
				frq['i']--;
				frq['x']--;
			}
			else if ((frq['s'] > 0) && (frq['e'] > 1) && (frq['v'] > 0) && (frq['n'] > 0)) {
				arr[7]++;
				frq['s']--;
				frq['n']--;
				frq['v']--;
				frq['e'] -= 2;
			}
			else if ((frq['e'] > 0) && (frq['i'] > 0) && (frq['g'] > 0) && (frq['h'] > 0) && (frq['t'] > 0)) {
				arr[8]++;
				frq['e']--;
				frq['i']--;
				frq['g']--;
				frq['h']--;
				frq['t']--;
			}
			else if ((frq['n'] > 1) && (frq['i'] > 0) && (frq['e'] > 0)) {
				arr[9]++;
				frq['n'] -= 2;
				frq['i']--;
				frq['e']--;
			}
			break;
		}
		for (int i = 0; i < 10; i++) {
			if (arr[i] > 0) {
				res += char(i + 48);
				arr[i]--;
			}
		}
		while ((frq['z'] > 0) && (frq['e'] > 0) && (frq['r'] > 0) && (frq['o'] > 0)) {
			arr[0]++;
			frq['z']--;
			frq['e']--;
			frq['r']--;
			frq['o']--;
		}
		while ((frq['o'] > 0) && (frq['n'] > 0) && (frq['e'] > 0)) {
			arr[1]++;
			frq['o']--;
			frq['n']--;
			frq['e']--;
		}
		while ((frq['t'] > 0) && (frq['w'] > 0) && (frq['o'] > 0)) {
			arr[2]++;
			frq['t']--;
			frq['w']--;
			frq['o']--;
		}
		while ((frq['t'] > 0) && (frq['h'] > 0) && (frq['r'] > 0) && (frq['e'] > 1)) {
			arr[3]++;
			frq['t']--;
			frq['h']--;
			frq['r']--;
			frq['e'] -= 2;
		}
		while ((frq['f'] > 0) && (frq['o'] > 0) && (frq['r'] > 0) && (frq['u'] > 0)) {
			arr[4]++;
			frq['f']--;
			frq['o']--;
			frq['r']--;
			frq['u']--;
		}
		while ((frq['f'] > 0) && (frq['i'] > 0) && (frq['v'] > 0) && (frq['e'] > 0)) {
			arr[5]++;
			frq['f']--;
			frq['i']--;
			frq['v']--;
			frq['e']--;
		}
		while ((frq['s'] > 0) && (frq['i'] > 0) && (frq['x'] > 0)) {
			arr[6]++;
			frq['s']--;
			frq['i']--;
			frq['x']--;
		}
		while ((frq['s'] > 0) && (frq['e'] > 1) && (frq['v'] > 0) && (frq['n'] > 0)) {
			arr[7]++;
			frq['s']--;
			frq['n']--;
			frq['v']--;
			frq['e'] -= 2;
		}
		while ((frq['e'] > 0) && (frq['i'] > 0) && (frq['g'] > 0) && (frq['h'] > 0) && (frq['t'] > 0)) {
			arr[8]++;
			frq['e']--;
			frq['i']--;
			frq['g']--;
			frq['h']--;
			frq['t']--;
		}
		while ((frq['n'] > 1) && (frq['i'] > 0) && (frq['e'] > 0)) {
			arr[9]++;
			frq['n'] -= 2;
			frq['i']--;
			frq['e']--;
		}
		for (int i = 0; i < 10; i++) {
			while (arr[i] > 0) {
				res += char(i + 48);
				arr[i]--;
			}
		}
		if (!res.empty()) {
			cout << stoi(res) << endl;
		}
	}


	return 0;
}