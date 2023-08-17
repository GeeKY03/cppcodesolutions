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

int main() {
    FastIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    // Your code goes here
    ll v, e;
    cin >> v >> e;
    int vis[v + 1] = {0}; // vis means included in my MST
    vector<pair<int, int>> adj[v + 1]; // 1-based indexing

    for (int i = 0; i < e; i++) {
        ll x, y, w;
        cin >> x >> y >> w;
        adj[x].pb({y, w});
        adj[y].pb({x, w});
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;

    Q.push({0, 1}); // Choosing a starting node as 1 with weight 0
    // {Weight, node}

    long long int mst = 0;


    while (!Q.empty()) {
        pair<int, int> best = Q.top();
        Q.pop();

        int weight = best.first;
        int to = best.second; // node to which it is pointing to


        // Not an active edge
        if (vis[to]) {
            continue;
        }
        else {
            mst += weight;
            vis[to] = 1;

            // to vertex is visited
            for (auto x : adj[to]) {
                if (vis[x.first] == 0) {
                    // x.first is not visited
                    Q.push({x.second, x.first});
                }
            }
        }
    }

    cout << mst << endl;


    return 0;
}