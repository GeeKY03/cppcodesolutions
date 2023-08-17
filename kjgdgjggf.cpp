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
	ll n;
	cin >> n;
	vlli v1, v2;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v1.pb(x);
	}
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		v2.pb(x);
	}
	priority_queue<ll, vector<ll>, greater<ll> > pq;
	for (int i = 0; i < n; i++) {
		while ((!pq.empty()) && (pq.top() < arr1[i])) {
			pq.pop();
		}
		pq.push(arr2[i]);
	}
	cout << pq.size() << endl;



	return 0;
}