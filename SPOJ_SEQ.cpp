#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);
#define MOD 1000000000

ll k; // Computed for every recurrence to decide dimensions of T
// Could be given in ques to make input easy
vector<ll> a,
       b, // To store F1 (first k elements given in ques)
       c; // To store the coefficients of all elements of f(i)



vector<vector<ll>> Matmulti(vector<vector<ll>> A, vector<vector<ll>> B) {
	// Lets store the result in some matrix C
	vector<vector<ll>> C(k + 1, vector<ll> (k + 1));

	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= k; j++) {
			for (int x = 1; x <= k; x++) {
				C[i][j] = (C[i][j] + (A[i][x] * B[x][j]) % MOD) % MOD;
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

	// base case
	if (n == 0) {
		return 0;
	}

	// if element is already a part of first k elemets,
	// we don't need to calculate as its already given and stored in vector b
	if (n <= k) {
		return b[n - 1];
	}

	// Otherwise we have to do matrix exponentiation

	// Column matrix that stores the first k elements,
	// with indexing from 1 (that's why k+1 size)
	vector<ll> F1(k + 1);

	// Step->1
	// Substituting the values of first k elemr=ents in F1 matrix
	for (int i = 1; i <= k; i++) {
		F1[i] = b[i - 1];
	}

	// Step->2
	// Build the transformation matrix
	// Using a 2D vector of size k+1*k+1 (its k*k only because indexing is from)
	vector<vector<ll>> T(k + 1, vector<ll>(k + 1));
	// Now filling values in the transfomation matrix
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= k; j++) {
			if (i == k) {
				T[i][j] = c[k - j];
			}
			else {
				if (j == i + 1) {
					T[i][j] = 1;
				}
				else {
					T[i][j] = 0;
				}
			}
		}
	}
	// So the transformation matrix is now done

	// Formula :
	// Fn= F^(n-1) F1, to find the nth term

	// Now we need to calculate T^(n-1)
	T = Matexp(T, n - 1); // Function to calculate T^(n-1)
	// Matexp stands for Matrix Exponenentiation

	// Step-> 4
	// Multiply T^(n-1) with F1
	// i.e. multiply matrix with a vector
	// Just multiplying first row with F1 column matrix to get first element of product matrix
	ll res = 0;
	for (int i = 1; i <= k; i++) {
		res = (res + (T[1][i] * F1[i]) % MOD) % MOD;
	}
	return res;



}


int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t; // testcases
	cin >> t;
	while (t--) {
		ll n; // Nth term, that needs to be found out

		cin >> k; // K is already given, no need to compute ;)

		// Taking input of F1, first k elements of recursive sequence
		for (int i = 0; i < k; i++) {
			ll x;
			cin >> x;
			b.push_back(x);
		}

		// Taking input of coefficients of terms in f(i)
		for (int i = 0; i < k; i++) {
			ll x;
			cin >> x;
			c.push_back(x);
		}

		cin >> n; // nth term needs to be found out

		// Making a function to compute the nth term
		cout << compute(n) << endl;

		// We need to clear the vector for every test case
		b.clear();
		c.clear();
	}


	return 0;
}