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
	string s;
	cin >> s;
	int n = s.size();
	stack<int> st;
	for (int i = 0; i < n; i++) {
		if (s[i] == '(') {
			st.push('(');
		}
		else {
			if (st.empty()) {
				st.push(')');
			}
			else {
				if (st.top() == '(') {
					st.pop();
				}
				else {
					st.push(')');
				}
			}
		}
	}
	if (!st.empty()) {
		cout << 0 << endl;
	}
	else {
		cout << 1 << endl;
	}


	return 0;
}