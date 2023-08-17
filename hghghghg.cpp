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

ll binexp(ll a, ll b /*,ll m */) {

    ll res = 1;
    // a%=m;
    while (b > 0) {
        if (b & 1) {
            res = res * a /* %m*/ ;
        }
        a = a * a /* %m */ ;
        b >>= 1;
    }
    return res;
}

map<ll, list<ll>> l;
map<ll, ll> vis;

void DFS(ll node) {
    vis[node] = 1;
    for (auto nbr : l[node]) {
        if (vis[nbr] == 0) {
            DFS(nbr);
        }
    }
}

int main() {
    FastIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    // Your code goes here
    ll n, m;
    cin >> n >> m;
    ll res = 1;
    for (int i = 0; i < m; i++) {
        ll x, y;
        cin >> x >> y;
        l[x].pb(y);
        l[y].pb(x);
    }
    ll ctr = 0;
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            DFS(i);
            ctr++;
        }
    }
    cout << binexp(2, n - ctr);


    return 0;
}