// Topo sort using BFS
// First begin with a node with zero dependecies
// maintain a record of indegrees of the edges
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

map<ll, list<ll>> l;
map<ll, ll> vis;
vlli res;
queue<int> q;

void topo_sort(ll v) {
    vector<int> indegree(v + 5, 0);
    for (auto x : l) {
        for (auto y : l[x.ff]) {
            indegree[y]++;
        }
    }
    for (int i = 0; i < v; i++) {
        if (indegree[i] == 0) {
            q.push(i);
        }
    }
    while (!q.empty()) {
        ll node = q.front();
        res.pb(node);
        q.pop();
        for (auto nbr : l[node]) {
            indegree[nbr]--;
            if (indegree[nbr] == 0) {
                q.push(nbr);
            }
        }
    }
}

int main() {
    FastIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    // Your code goes here
    ll v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++) {
        ll x, y;
        cin >> x >> y;
        l[x].pb(y);
    }
    topo_sort(v);
    for (int i = 0; i < v; i++) {
        cout << res[i] << " ";
    }


    return 0;
}