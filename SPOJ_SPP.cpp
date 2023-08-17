#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);


ll k, p;

vector<ll> b, c;

vector<vector<ll>> Matmulti(vector<vector<ll>> A, vector<vector<ll>> B) {
	// Lets store the result in some matrix C
	vector<vector<ll>> C(k + 2, vector<ll> (k + 2));

	for (int i = 1; i <= k + 1; i++) {
		for (int j = 1; j <= k + 1; j++) {
			for (int x = 1; x <= k + 1; x++) {
				C[i][j] = (C[i][j] + (A[i][x] * B[x][j]) % p) % p;
			}
		}
	}
	return C;
}

vector<vector<ll>> Matexp(vector<vector <ll>> A, ll p) {
	/* Does A^p */

	// If p==1, return the same matrix beacause obviously
	if (p == 1) {
		return A;
	}

	// Using divide and conquer algorithm (Dunno what's that, but using it)
	/*
	If p is odd then:
	    A^p=A * A^p-1
	else if p is even
	    A^p=A * A^((p/2)^2)
	*/

	if (p & 1) {
		// Cannot directly do A*Matexp(A,p-1) beacsuse A is not a number
		return Matmulti(A, Matexp(A, p - 1));
	}
	// if its even we create a matrix that stores A^(p/2)
	vector<vector<ll>> X = Matexp(A, p / 2);
	return Matmulti(X, X);
}

ll compute(ll n) {

	vector<ll> F1(k + 2, 0);
	ll sum = 0;
	for (int i = 0; i < k; i++) {
		sum += b[i];
	}
	F1[1] = sum;
	for (int i = 2; i <= k + 1; i++) {
		F1[i] = b[i - 2];
	}
	// F1 is ready

	// Now we need to make Transformation matrix
	vector<vector<ll>> T(k + 2, vector<ll>(k + 2));
	for (int i = 1; i <= k + 1; i++) {
		for (int j = 1; j <= k + 1; j++) {
			if (i == 1) {
				if (j == 1) {
					T[i][j] = 1;
				}
				else {
					T[i][j] = c[j - 2];
				}
			}
			else if (i == k + 1) {
				if (j == 1) {
					T[i][j] = 0;
				}
				else {
					T[i][j] = c[j - 2];
				}
			}
			else if (j == i + 1) {
				T[i][j] = 1;
			}
			else {
				T[i][j] = 0;
			}
		}
	}

	// Transformation matrix is ready
	T = Matexp(T, n - 1);
	for (int i = 1; i <= k + 1; i++) {
		for (int j = 1; j <= k + 1; j++) {
			cout << T[i][j] << " ";
		}
		cout << endl;
	}
	ll res = 0;
	for (int i = 1; i <= k + 1; i++) {
		res = (res + (T[1][i] * F1[i]) % p) % p;
	}
	return res;


}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin >> t;
	while (t--) {
		ll m, n;
		cin >> k;
		for (int i = 0; i < k; i++) {
			ll x;
			cin >> x;
			b.pb(x);
		}
		for (int i = 0; i < k; i++) {
			ll x;
			cin >> x;
			c.pb(x);
		}
		cin >> m >> n >> p;
		ll sm_1 = compute(m - 1);
		cout << sm_1 << endl;
		ll sn = compute(n);
		cout << sn << endl;
	}


	return 0;
}