#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

void printsub(char *arr, vector<char> &v, ll n) {
	if (n == 0) {
		if (v.size() == 0) {
			cout << "()" << endl;
		}
		for (auto x : v) {
			cout << x << " ";
		}
		cout << endl;
		return ;
	}
	v.pb(arr[0]);
	printsub(arr + 1, v, n - 1);
	v.pop_back();
	printsub(arr + 1, v, n - 1);
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	string s;
	cin >> s;
	char arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = s[i];
	}
	vector<char> v;
	printsub(arr, v, n);


	return 0;
}