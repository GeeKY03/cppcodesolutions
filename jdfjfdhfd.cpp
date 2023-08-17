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

const int N = 2e+5;

map<ll, list<ll>> l;
ll vis[N] = {0};

void BFS(ll src) {
	queue<ll> q;
	q.push(src);
	vis[src] = 1;
	while (!q.empty()) {
		ll node = q.front();
		q.pop();
		cout << node << " ";
		for (auto nbr : l[node]) {
			if (vis[nbr] == 0) {
				q.push(nbr);
				vis[nbr] = 1;
			}
		}
	}
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		l[x].pb(y);
		l[y].pb(x);
	}
	BFS(1);



	return 0;
}