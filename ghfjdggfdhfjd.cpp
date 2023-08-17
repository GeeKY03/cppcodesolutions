#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

void permu(int *arr, vector<int> &v, int n) {
	if (n == 2) {
		swap(arr[0], arr[1]);
		for (auto x : v) {
			cout << x << " ";
		}
		cout << endl;
		return;
	}
	permu(arr + 1, v, n - 1);
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> v;
	permu(arr, v, n);


	return 0;
}