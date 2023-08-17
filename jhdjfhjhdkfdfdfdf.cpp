#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

bool isSorted(ll *arr, ll n) {
	if (n == 1) {
		return true;
	}
	if (arr[0] > arr[1]) {
		return false;
	}
	isSorted(arr + 1, n - 1);
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	ll arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (isSorted(arr, n)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	// cout << isSorted(arr, n);

	return 0;
}