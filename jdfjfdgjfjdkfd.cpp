#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

ll merge(ll *arr, ll s, ll e) {

	ll mid = (s + e) / 2;
	ll i = s;
	ll j = (mid + 1);
	ll k = s;

	ll temp[100000];
	ll cnt = 0; // cross-inversions

	while (i <= mid and j <= e) {
		if (arr[i] <= arr[j]) {
			temp[k] = arr[i];
			k++;
			i++;
		}
		else {
			temp[k++] = arr[j++];
			cnt += mid - i + 1;
		}
	}

	// fill the array if some of the elements are left in one of the array
	while (i <= mid) {
		temp[k++] = arr[i++];
	}
	while (j <= e) {
		temp[k++] = arr[j++];
	}

	// copy all elements back to array arr
	for (int i = s; i <= e; i++) {
		arr[i] = temp[i];
	}

	return cnt;
}

ll inversioncount(ll *arr, ll s, ll e) {
	// base case
	if (s >= e) {
		return 0;
	}
	// merge sort
	ll mid = (s + e) / 2;
	ll x = inversioncount(arr, s, mid);
	ll y = inversioncount(arr, mid + 1, e);
	ll z = merge(arr, s, e);

	// Total inversions = x(inversions of first half)+ y(inversions of second half)+ z(cross-inversions)
	return x + y + z;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	ll arr1[n];
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	ll q;
	cin >> q;
	for (int k = 0; k < q; k++) {
		ll a, b;
		cin >> a >> b;
		vi v;

		if (inversioncount(arr, 0, n - 1) & 1) {
			cout << "odd" << endl;
		}
		else {
			cout << "even" << endl;
		}
	}

	return 0;
}