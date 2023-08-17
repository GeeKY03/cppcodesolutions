#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

long long binexp(long long a, long long b) {
	long long res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}

int main() {
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, m;
	cin >> n >> m;
	ll i, j;
	cin >> i >> j;
	string str1, str2;
	while (n > 0) {
		if (n & 1) {
			str1.pb('1');
		}
		else {
			str1.pb('0');
		}
		n /= 2;
	}
	reverse(str1.begin(), str1.end());
	// cout << str1 << endl;
	while (m > 0) {
		if (m & 1) {
			str2.pb('1');
		}
		else {
			str2.pb('0');
		}
		m /= 2;
	}
	reverse(str2.begin(), str2.end());
	// cout << str2 << endl;
	ll sz = str1.size();
	ll ind = str2.size() - 1;
	for (int i = sz - j - 1; i < sz - i + j; i++) {
		if (ind >= 0) {
			str1[i] = str2[ind];
			ind--;
		}
	}
	ll num = 0;
	reverse(str1.begin(), str1.end());
	for (int i = 0; i < sz; i++) {
		num += binexp(2, i) * (str1[i] - 48);
	}
	cout << num << endl;






	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}