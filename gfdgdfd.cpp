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





int calculateMaxPath(vector<vector<int>>& adjacency, int parent, int node, map<pair<int, int>, int> &mp) {
    int result = 0;
    for (int index = 0; index < adjacency[node].size(); index++) {
        if (adjacency[node][index] == parent)
            continue;
        int counter = 0;
        if (mp[ {parent, node}] > mp[ {node, adjacency[node][index]}])
            counter++;
        result = max(result, counter + calculateMaxPath(adjacency, node, adjacency[node][index], mp));
    }
    return result;
}


int main() {
    FastIO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);


    // Your code goes here
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<vector<int>> adjacecny(n + 1);
        map<pair<int, int>, int> mp;
        for (int i = 0; i < n - 1; i++) {
            ll x, y;
            cin >> x >> y;
            mp[ {x, y}] = i;
            mp[ {y, x}] = i;
            adjacecny[x].push_back(y);
            adjacecny[y].push_back(x);
        }
        int res = INT_MIN;
        for (int i = 0; i < adjacecny[1].size(); i++) {
            res = max(res, calculateMaxPath(adjacecny, 1, adjacecny[1][i], mp));
        }
        cout << res + 1 << endl;
    }

    return 0;
}
