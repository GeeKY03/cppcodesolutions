#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// ALternate solution to the last one
	ll n, m, i, j;
	cin >> n >> m >> i >> j;
	// let's clear the bits from n to apply & operation with m<<i
	ll mask1 = (-1) << j + i - 1;
	ll mask2 = (-1) << i;
	mask2 = (~mask2);
	ll fmask = (mask1 | mask2);
	n = (n & fmask);
	m = m << i;
	cout << (n | m) << endl;



	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
	cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}