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

bool isLeaf(TreeNode* node) {
	if (node->right == NULL && node->left == NULL) {
		return true;
	}
	return false;
}

void addLeftB(TreeNode* node, vector<int> &left) {
	if (node == NULL) {
		return;
	}
	if (!isLeaf(node)) {
		left.pb(node->data);
	}
	if (node->left != NULL) addLeftB(node->left, left);
	else addLeftB(node->right, left);
}

void addRightB(TreeNode *node, vector<int> &right) {
	if (node == NULL) {
		return ;
	}
	if (node->right != NULL) addRightB(node->right, right);
	else addRightB(node->left, right);
	if (!isLeaf(node)) {
		right.pb(node->data);
	}
}

void addLeaves(TreeNode* node, vector<int> &lvs) {
	if (node == NULL) {
		return ;
	}
	if (isLeaf(node)) {
		lvs.pb(node->data);
	}
	addLeaves(node->left, lvs);
	addLeaves(node->right, lvs);
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
	root->left->left = new TreeNode(3);
	root->left->left->right = new TreeNode(4);
	root->left->left->right->left = new TreeNode(5);
	root->left->left->right->right = new TreeNode(6);
	root->right = new TreeNode(7);
	root->right->right = new TreeNode(8);
	root->right->right->left = new TreeNode(9);
	root->right->right->left->left = new TreeNode(10);
	root->right->right->left->right = new TreeNode(11);
	/*
		      1
		   2     7
		3          8
		  4      9
		5   6  10  11
	*/

	vector<int> left, lvs, right;
	addLeftB(root, left);
	addRightB(root->right, right);
	addLeaves(root, lvs);
	for (auto x : left) {
		cout << x << " ";
	}
	for (auto x : lvs) {
		cout << x << " ";
	}
	for (int i = 0; i <= right.size() - 1; i++) {
		cout << right[i] << " ";
	}
	cout << endl;








	return 0;
}