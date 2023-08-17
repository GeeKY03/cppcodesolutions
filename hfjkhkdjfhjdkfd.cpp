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

void left(TreeNode* node, vector<int> &res) {
	if (root == NULL) {
		return ;
	}

	if (node->left == NULL && node->right == NULL) {
		return;
	}

	res.pb(node->val);
	if (node->left != NULL) {
		left(node->left, res);
	}
	else {
		left(node->right, res);
	}
}

void right(TreeNode* node, vector<int> &res) {
	if (node == NULL) {
		return ;
	}

	if (node->left == NULL && node->right == NULL) {
		return;
	}

	if (node->right != NULL) {
		right(node->right, res);
	}
	else {
		right(node->left, res);
	}
}

void leaf(TreeNode* node, vector<int> &res) {
	if (node == NULL) {
		return ;
	}

	if (node->elft == NULL && node->right == NULL) {
		res.pb(node->val);
		return;
	}

	leaf(node->left);
	leaf(node->right);

}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	vector<int> res;

	left(root, res);
	leaf(node, res);
	right(node, res);

	for (auto x : res) {
		cout << x << " ";
	}
	cout << endl;



	return 0;
}