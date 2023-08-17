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

class TreeNode {
public:
	int data;
	TreeNode *right, *left;

	TreeNode(int val) {
		data = val;
		right = NULL;
		left = NULL;
	}
};
// map< axis, map< level, multiset< nodes >>> mp;
map<int, map<int, multiset<int>>> mp;
void Vertical(TreeNode *node) {
	queue<pair<TreeNode*, pair<int, int>>> q;
	q.push({node, {0, 0}});
	while (!q.empty()) {
		auto p = q.front();
		q.pop();
		TreeNode *node = p.ff;
		int ax = p.ss.ff, lv = mp.ss.ss;
		mp[ax][lv].insert(node->data);
		if (node->left != NULL) q.push({node->left, {ax - 1, lv + 1}});
		if (node->right != NULL) q.push({node->right, {ax + 1, lv + 1}});
	}
}


int main() {
	FastIO

	/*
		Types of Binary Tree:

		1. Full Binary Tree: Each node has either 2 or 0 children.

		2. Complete Binary Tree;
		a. All nodes must be completely filled except the last level.
		b. Nodes on the last level must be as left as possible

		3. Perfect Binary Tree: All leaf nodes must be at the same level.

		4. Balanced Binary Tree: Height of tree must be at max log(N) where N is the no of noodes in it.

		5. Degenerate Binary Tree: Every node in this tree at max has 1 child node.

	*/
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->left->right = new TreeNode(5);
	root->left->left->right->right = new TreeNode(6);
	root->right->left = new TreeNode(9);
	root->right->right = new TreeNode(10);
	vector<vector<int>> res;
	Vertical(root);

	for (auto x : mp) {
		cout << x.ff << " ";
		for (auto y : x.ss) {
			cout << y.ff << " ";
			for (auto z : y.ss) {
				cout << z << " ";
			}
		}
		cout << en
	}

	return 0;
}