#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <time.h>
using namespace std;
using namespace __gnu_pbds;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC target("popcnt")

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
using namespace std;

const double pi = acos(-1);

// DEBUG FUNCTIONS
#ifndef ONLINE_JUDGE

template<typename T>
void __p(T a) {
	cout << a;
}
template<typename T, typename F>
void __p(pair<T, F> a) {
	cout << "{";
	__p(a.first);
	cout << ",";
	__p(a.second);
	cout << "}";
}
template<typename T>
void __p(std::vector<T> a) {
	cout << "{";
	for (auto it = a.begin(); it < a.end(); it++)
		__p(*it), cout << ",}"[it + 1 == a.end()];
}
template<typename T>
void __p(std::set<T> a) {
	cout << "{";
	for (auto it = a.begin(); it != a.end();) {
		__p(*it);
		cout << ",}"[++it == a.end()];
	}

}
template<typename T>
void __p(std::multiset<T> a) {
	cout << "{";
	for (auto it = a.begin(); it != a.end();) {
		__p(*it);
		cout << ",}"[++it == a.end()];
	}
}
template<typename T>
void __p(ordered_set<T> a) {
	cout << "{";
	for (auto it = a.begin(); it != a.end();) {
		__p(*it);
		cout << ",}"[++it == a.end()];
	}

}
template<typename T>
void __p(ordered_multiset<T> a) {
	cout << "{";
	for (auto it = a.begin(); it != a.end();) {
		__p(*it);
		cout << ",}"[++it == a.end()];
	}
}
template<typename T, typename F>
void __p(std::map<T, F> a) {
	cout << "{\n";
	for (auto it = a.begin(); it != a.end(); ++it)
	{
		__p(it->first);
		cout << ": ";
		__p(it->second);
		cout << "\n";
	}
	cout << "}\n";
}

template<typename T, typename ...Arg>


void __p(T a1, Arg ...a) {
	__p(a1);
	__p(a...);
}
template<typename Arg1>
void __f(const char *name, Arg1 &&arg1) {
	cout << name << " : ";
	__p(arg1);
	cout << endl;
}
template<typename Arg1, typename ... Args>
void __f(const char *names, Arg1 &&arg1, Args &&... args) {
	int bracket = 0, i = 0;
	for (;; i++)
		if (names[i] == ',' && bracket == 0)
			break;
		else if (names[i] == '(')
			bracket++;
		else if (names[i] == ')')
			bracket--;
	const char *comma = names + i;
	cout.write(names, comma - names) << " : ";
	__p(arg1);
	cout << " | ";
	__f(comma + 1, args...);
}
#define trace(...) cout<<"Line:"<<__LINE__<<" ", __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define trace(...)
#define error(...)
#endif

// DEBUG FUNCTIONS END

# define FOR(i, a, n) for(int i = a; i<n;i++)
# define FORd(i, a, n) for(int i = a; i >= n; i--)
#define ll long long
ll mod = 998244353;
# define endl "\n"
# define int ll
# define printArr(arr, n) FOR(abcd,0,  n){cout<<arr[abcd]<<" ";}cout<<endl;
#define f first
#define se second
#define pb push_back
#define pob pop_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
typedef vector<int> vi;
typedef pair<long long, long long> pii;
typedef vector<pair<long long, long long>> vpi;
typedef vector<vector<int>> vvi;
int gcdExtended(int a, int b, int* x, int* y)
{
	// Base Case
	if (a == 0)
	{
		*x = 0, *y = 1;
		return b;
	}

	int x1, y1; // To store results of recursive call
	int gcd = gcdExtended(b % a, a, &x1, &y1);

	// Update x and y using results of recursive
	// call
	*x = y1 - (b / a) * x1;
	*y = x1;

	return gcd;
}


// Function to find modulo inverse of a
ll modInverse(ll a, ll m)
{
	int x, y;
	int g = gcdExtended(a, m, &x, &y);
	if (g != 1)
		return 0;
	else
	{
		// m is added to handle negative x
		ll res = (x % m + m) % m;
		return res;
	}
}

ll nCr(int n, int r) {
	if (r > n) {
		return 0;
	}
	if (r > n - r) {
		r = n - r;
	}
	ll ans = 1;
	for (int i = 1; i <= r ; i++) {
		ans *= (n - i + 1);
		ans %= mod;
		ans *= modInverse(i, mod);
		ans %= mod;

	}

	return ans;
}

ll binpow(ll a, ll b) {
	if (b == 0)
		return 1;
	long long res = binpow(a, b / 2);
	if (b % 2)
		return (res * res) % mod * a % mod;
	else
		return (res * res) % mod;
}

// const int Max = 1e4 +10;
// ll fact[Max];
// ll inv_fact[Max];

// void preSolveFact(ll n){
//     ll ans = 1;
//     fact[0] = 1;
//     for(int i = 1; i<=n; i++){
//         ans *= i;
//         ans %= mod;
//         fact[i] = ans;
//     }
//     inv_fact[n] = binpow(fact[n], mod-2);

//     for(int i = n-1; i>=0; i--){
//         inv_fact[i] = inv_fact[i+1] * (i+1) %mod;
//     }
// }
// ll nCr_pre(ll n, ll r){
//  // trace(n, r);
//  // trace(fact[n], inv_fact[r], inv_fact[n - r]);
//     if(n>=r && n>=0 && r>=0)
//     return fact[n] * inv_fact[r] %mod * inv_fact[n-r]%mod;
//     else return 0;
// }

signed main() {
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	freopen("output.in", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vvi arr(n);
		FOR(i, 0, n) {
			int k;
			cin >> k;
			arr[i].resize(k);
			FOR(j, 0, k) {
				cin >> arr[i][j];
			}
		}
		int ans = 0;
		map<int, int> M;
		FOR(i, 0, n) {
			for (auto it : arr[i]) {
				M[it]++;
			}
		}
		FOR(i, 0, n) {
			bool ok = true;
			for (auto it : arr[i]) {
				if (M[it] < 2) {
					ok = false;
				}
			}
			if (ok) {
				ans = 1;
				break;
			}
		}
		if (ans) cout << "YES" << endl;
		else cout << "NO" << endl;
		trace(arr);
	}
}



