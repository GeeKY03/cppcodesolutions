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

void Build(ll *arr, ll*tree, ll ss, ll se, ll index) {
	if (ss == se) {
		tree[index] = arr[ss];
		return ;
	}
	ll mid = (ss + se) / 2;
	Build(arr, tree, ss, mid, index * 2);
	Build(arr, tree, mid + 1, se, 2 * index + 1);
	tree[index] = max(tree[2 * index], tree[2 * index + 1]);
	return ;
}

ll Query(ll *tree, ll ss, ll se, ll qs, ll qe, ll index) {
	if ((ss >= qs) && (se <= qe)) {
		return tree[index];
	}
	if ((se < qs) || (ss > qe)) {
		return INT_MIN;      // Remeber to change this line as per requirements

		// for min range queries return INT_MAX
		// for max range queries return INT_MIN
		// for range sum queries return 0
	}
	ll mid = (ss + se) / 2;
	ll left = Query(tree, ss, mid, qs, qe, index * 2);
	ll right = Query(tree, mid + 1, se, qs, qe, (2 * index) + 1);
	return max(left, right);
}

void Update(ll *tree, ll ss, ll se, ll idx, ll nval, ll index) {
	if ((idx < ss) || (idx > se)) {
		return ;
	}
	if ((ss == se) && (ss == idx)) {
		tree[index] = nval;
		return;
	}
	ll mid = (ss + se) / 2;
	Update(tree, ss, mid, idx, nval, 2 * index);
	Update(tree, mid + 1, se, idx, nval, 2 * index + 1);
	tree[index] = max(tree[2 * index], tree[2 * index + 1]);
	return;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n, m;
	cin >> n;
	ll arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	ll tree[4 * n + 1];
	Build(arr, tree, 0, n - 1, 1);
	cin >> m;
	while (m--) {
		ll typ, a, b;
		cin >> typ >> a >> b;
		if (typ == 1) {
			cout << Query(tree, 0, n - 1, a - 1, b - 1, 1) << endl;
		}
		else {
			Update(tree, 0, n - 1, a - 1, b, 1);
		}
	}




	return 0;
}