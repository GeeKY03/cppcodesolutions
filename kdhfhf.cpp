#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll n;
	cin >> n;
	ll a[n], b[n];
	map<int, int> mp1, mp2;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp1[a[i]]++;
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		mp2[a[i]] += b[i];
	}
	map<int, int> avg;
	for (auto x : mp1) {
		avg[x.first] += (mp2[x.first] / mp1[x.first]);
	}
	for (int i = 0; i < n; i++) {
		cout << b[i] - avg[a[i]] << " ";
	}
	cout << endl;


	return 0;
}