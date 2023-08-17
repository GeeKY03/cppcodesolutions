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

void Update(ll *tree, ll ss, ll se, ll l, ll r, ll inc, ll index) {
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
	Update(tree, ss, mid, l, r, inc, 2 * index);
	Update(tree, mid + 1, se, l, r, inc, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]); // Remember to change this line as per requirement of question
	return;
}

ll query(ll *tree, ll ss, ll se, ll qs, ll qe, ll index) {
	// No overlap
	if ((ss > qe) || (se < qs)) {
		return INT_MAX;
	}

	// Complete overlap
	if ((ss >= qs) && (se <= qe)) {
		return tree[index];
	}

	// Partial Overlap
	ll mid = (ss + se) / 2;
	ll left = query(tree, ss, mid, qs, qe, 2 * index);
	ll right = query(tree, mid + 1, se, qs, qe, (2 * index) + 1);
	return min(left, right);
}

void BuildSegTree(ll *arr, ll start, ll end, ll *tree, ll index) {
	// Stop at the end node
	if (start == end) {
		tree[index] = arr[start];
		return ;
	}
	//  Divide and conquer principle
	ll mid = (start + end) / 2;
	// Building the left subtree
	BuildSegTree(arr, start, mid, tree, 2 * index);
	// Build the right subtree
	BuildSegTree(arr, mid + 1, end, tree, 2 * index + 1);
	tree[index] = min(tree[2 * index], tree[2 * index + 1]);
	return ;
}

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll arr[] = {3, 1, 4, -3, 2, 7};
	ll n = sizeof(arr) / sizeof(arr[0]);
	ll sz = 4 * n - 1;
	ll tree[sz];
	BuildSegTree(arr, 0, n - 1, tree, 1);
	// for (int i = 1; i <= 13; i++) {
	// 	cout << tree[i] << " ";
	// }
	// cout << endl;
	cout << query(tree, 0, n - 1, 1, 2, 1) << endl;
	Update(tree, 0, n - 1, 1, 6, 10, 1);
	cout << query(tree, 0, n - 1, 1, 2, 1) << endl;




	return 0;
}