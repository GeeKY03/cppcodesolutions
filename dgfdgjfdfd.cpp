#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll lazy[10000] = {0};

void UpdateRangeLazy(ll *tree, ll ss, ll se, ll l, ll r, ll inc, ll index) {
	// Before going down resolve the lazy values if they exist
	if (lazy[index] != 0) {
		tree[index] += lazy[index];
		// for non leaf node
		if (ss != se) {
			lazy[2 * index] += lazy[index];
			lazy[2 * index + 1] += lazy[index];
		}
		lazy[index] = 0; // clear the lazy value at current node
	}

	// Base case
	// No overlap
	if ((ss > r) || (se < l)) {
		return;
	}

	// recursive case
	// if there is a complete overlap
	if ((ss >= l) && (se <= r)) {
		tree[index] += inc;

		// create a new lazy value of children node

		// If children node exist
		if (ss != se) {
			lazy[2 * index] += inc;
			lazy[2 * index + 1] += inc;
		}
		return ;
	}

	// If there is a partial overlap
	ll mid = (ss + se) / 2;
	UpdateRangeLazy(tree, ss, mid, l, r, inc, 2 * index);
	UpdateRangeLazy(tree, mid + 1, se, l , r, inc, 2 * index + 1);

	// Update the tree[index]
	tree[index] = min(tree[index * 2], tree[2 * index + 1]);
	return ;

}


ll QueryLazy(ll *tree, ll ss, ll se, ll qs, ll qe, ll index) {
	// Resolve the lazy value at current node
	if (lazy[index] != 0) {
		tree[index] += lazy[index];
		// for non leaf node
		if (ss != se) {
			lazy[2 * index] += lazy[index];
			lazy[2 * index + 1] += lazy[index];
		}
		lazy[index] = 0; // clear the lazy value at current node
	}

	// Query Logic
	// No overlap
	if ((ss > qe) || (se < qs)) {
		return INT_MAX;
	}

	// Complete Overlap
	if ((ss >= qs) && (se <= qe)) {
		return tree[index];
		// We dont need to check the lazy value value
		// because we already have resolved it to children nodes
	}

	// Partial Overlap
	ll mid = (ss + se) / 2;
	ll left = QueryLazy(tree, ss, mid, qs, qe, index * 2);
	ll right = QueryLazy(tree, mid + 1, se, qs, qe, (2 * index) + 1);
	return min(left, right); // Remeber to change this line also

}

void BuildSegTree(ll *a, ll start, ll end, ll *tree, ll index) {
	// Base case
	if (start == end) {
		tree[index] = a[start];
		return;
	}

	// Recursive case
	ll mid = (start + end) / 2;
	BuildSegTree(a, start, mid, tree, 2 * index);
	BuildSegTree(a, mid + 1, end, tree, 2 * index + 1);

	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return;

}

ll query(ll *tree, ll ss, ll se, ll qs, ll qe, ll index) {

	// Complete overlap
	if ((ss >= qs) && (se <= qe)) {
		return tree[index];
	}

	// No Overlap
	if ((se < qs) || (ss > qe)) {
		return INT_MAX;      // Remeber to change this line as per requirements

		// for min range queries return INT_MAX
		// for max range queries return INT_MIN
		// for range sum queries return 0
	}

	// Partial overlap
	ll mid = (ss + se) / 2;
	ll left = query(tree, ss, mid, qs, qe, index * 2);
	ll right = query(tree, mid + 1, se, qs, qe, (2 * index) + 1);
	return min(left, right); // Remeber to change this line also
}

void UpdateRange(ll *tree, ll ss, ll se, ll l, ll r, ll inc, ll index) {
	// Out of bounds
	if ((l > se) || (r < ss)) {
		return;
	}

	// leaf node
	if (ss == se) {
		tree[index] += inc;
		return ;
	}

	// Recursive case
	ll mid = (se + ss) / 2;
	UpdateRange(tree, ss, mid, l, r, inc, 2 * index);
	UpdateRange(tree, mid + 1, se, l, r, inc, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]); // Remember to change this line as per requirement of question
	return;
}


int main() {
	ll a[] = {1, 3, 2, -5, 6, 4};
	ll n = sizeof(a) / sizeof(a[0]);
	ll tree[4 * n + 1];
	BuildSegTree(a, 0, n - 1, tree, 1);
	// for (int i = 1; i <= 13; i++) {
	// 	cout << tree[i] << " ";
	// }



	// ll q;  // no of queries
	// cin >> q;
	// while (q--) {
	// 	ll typ;
	// 	cin >> typ;
	// 	if (typ == 0) {
	// 		ll qs, qe;
	// 		cin >> qs >> qe;
	// 		ll res = query(tree, 0, n - 1, qs, qe, 1);
	// 		cout << res << endl;
	// 	}
	// 	else {
	// 		ll qs, qe;
	// 		cin >> qs >> qe;
	// 		UpdateRange(tree, 0, n - 1, qs, qe, typ, 1);
	// 	}
	// }

	UpdateRangeLazy(tree, 0, n - 1, 0, 2, 10, 1);
	UpdateRangeLazy(tree, 0, n - 1, 0, 4, 10, 1);
	cout << "Q1 1-1 " << QueryLazy(tree, 0, n - 1, 1, 1, 1) << endl; // 23
	UpdateRangeLazy(tree, 0, n - 1, 3, 4, 10, 1);
	cout << "Q1 3-5 " << QueryLazy(tree, 0, n - 1, 3, 5, 1) << endl; // 4


	return 0;
}