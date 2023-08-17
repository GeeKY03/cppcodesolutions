#include<bits/stdc++.h>
using namespace std;
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


// Returns nCr % p. In this Lucas Theorem based program,
// this function is only called for n < p and r < p.
int nCrModpDP(int n, int r, int p)
{
	// The array C is going to store last row of
	// pascal triangle at the end. And last entry
	// of last row is nCr
	int C[r + 1];
	memset(C, 0, sizeof(C));

	C[0] = 1; // Top row of Pascal Triangle

	// One by constructs remaining rows of Pascal
	// Triangle from top to bottom
	for (int i = 1; i <= n; i++)
	{
		// Fill entries of current row using previous
		// row values
		for (int j = min(i, r); j > 0; j--)

			// nCj = (n-1)Cj + (n-1)C(j-1);
			C[j] = (C[j] + C[j - 1]) % p;
	}
	return C[r];
}

// Lucas Theorem based function that returns nCr % p
// This function works like decimal to binary conversion
// recursive function. First we compute last digits of
// n and r in base p, then recur for remaining digits
int nCrModpLucas(int n, int r, int p)
{
// Base case
	if (r == 0)
		return 1;

// Compute last digits of n and r in base p
	int ni = n % p, ri = r % p;

// Compute result for last digits computed above, and
// for remaining digits. Multiply the two results and
// compute the result of multiplication in modulo p.
	return (nCrModpLucas(n / p, r / p, p) * // Last digits of n and r
	        nCrModpDP(ni, ri, p)) % p; // Remaining digits
}

ll DFS(ll src, ll &ctr, vector<set<ll>> l, vector<ll> &vis) {
	if (vis[src] == 1) {
		return ctr;
	}
	vis[src] = 1;
	ctr++;
	for (auto nbr : l[src]) {
		if (vis[nbr] == 0) {
			DFS(nbr, ctr, l, vis);
		}
	}
	return ctr;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, k;
	cin >> n >> k;
	vector<set<ll>> l(n + 1);
	vector<ll> vis(n + 1, 0);
	for (int i = 0; i < k; i++) {
		ll a, b;
		cin >> a >> b;
		l[a].insert(b);
		l[b].insert(a);
	}
	vi v;
	ll ctr = 0;
	for (ll i = 0; i < n; i++) {
		if (vis[i] == 0) {
			ll x = DFS(i, ctr, l, vis);
			v.pb(ctr);
			ctr = 0;
		}
	}
	ll tot = 0;
	tot = nCrModpLucas(n, 2, INT_MAX);
	ll sub = 0;
	for (int i = 0; i < v.size(); i++) {
		sub += nCrModpLucas(v[i], 2, INT_MAX);
	}
	cout << tot - sub << endl;




	return 0;
}