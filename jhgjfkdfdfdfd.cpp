#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int MaxGCD(int a[], int n)
{

	int Prefix[n + 2];
	int Suffix[n + 2];
	Prefix[1] = a[0];
	for (int i = 2; i <= n; i += 1) {
		Prefix[i] = __gcd(Prefix[i - 1], a[i - 1]);
	}
	Suffix[n] = a[n - 1];
	for (int i = n - 1; i >= 1; i -= 1) {
		Suffix[i] = __gcd(Suffix[i + 1], a[i - 1]);
	}

	int ans = max(Suffix[2], Prefix[n - 1]);

	for (int i = 2; i < n; i += 1) {
		ans = max(ans, __gcd(Prefix[i - 1], Suffix[i + 1]));
	}

	return ans;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n, r;
	cin >> n >> r;

	int a[n];
	for (int i = 0; i < n; i++) {

		cin >> a[i];
	}
	int res1 = a[0];
	for (int i = 1; i < n; i++) {
		res1 = __gcd(res1, a[i]);
	}
	int ans1 = MaxGCD(a, n);
	int mx = 0;
	for (int i = 1; i <= r; i++) {
		mx = max(__gcd(ans1, i), mx);

	}

	int ans2 = __gcd(ans1, mx);
	vector<int> v = {res1, ans2};
	sort(v.rbegin(), v.rend());
	cout << v[0] << endl;



	return 0;
}