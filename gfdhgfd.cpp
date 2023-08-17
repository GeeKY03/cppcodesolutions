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

ll n, m;
ll sz = 4 * n + 1;
vector<vector<ll>> tree(sz);

ll bs(ll index, ll n, ll k) {
	ll l = 0, r = n;
	while (l + 1 < r) {
		ll mid = (l + r) / 2;
		if (tree[index][mid] == k) {
			return mid;
		}
		else if (tree[index][mid] > k) {
			r = mid;
		}
		else {
			l = mid + 1;
		}
	}
	return l;
}
void Build(ll *arr, vector<vector<ll>> &tree, ll ss, ll se, ll index) {
	if (ss == se) {
		tree[index].pb(arr[se]);
		return;
	}
	ll mid = (ss + se) / 2;
	Build(arr, tree, ss, mid, 2 * index);
	Build(arr, tree, mid + 1, se, 2 * index + 1);
	for (int i = 0; i < tree[2 * index].size(); i++) {
		tree[index].pb(tree[2 * index][i]);
	}
	for (int i = 0; i < tree[2 * index + 1].size(); i++) {
		tree[index].pb(tree[2 * index + 1][i]);
	}
	sort(tree[index].begin(), tree[index].end());
	return;
}

ll Query(vector<vector<ll>> &tree, ll ss, ll se, ll qs, ll qe, ll k, ll index) {
	if ((ss >= qs) && (se <= qe)) {
		ll ctr = 0;
		ll size = tree[index].size();
		ll x = bs(index, size, k);
		ctr = size - x;
		return ctr;
	}
	if ((ss > qe) || (se < qs)) {
		return 0;
	}

	ll mid = (ss + se) / 2;
	ll left = Query(tree, ss, mid, qs, qe, k, 2 * index);
	ll right = Query(tree, mid + 1, se, qs, qe, k, 2 * index + 1);
	return left + right;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	cin >> n;
	ll arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	Build(arr, tree, 0, n - 1, 1);
	// for (int i = 1; i <= 9; i++) {
	// 	for (int j = 0; j < tree[i].size(); j++) {
	// 		cout << tree[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	cin >> m;
	while (m--) {
		ll l, r, k;
		cin >> l >> r >> k;
		cout << Query(tree, 0, n - 1, l - 1, r - 1, k, 1) << endl;
	}




	return 0;
}