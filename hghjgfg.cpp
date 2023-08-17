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



vector<vector<int>> Vertical(TreeNode *node) {
//  map < vertical, map< level, multiset<int>>> nodes
	map < int, map < int, multiset < int >>> nodes;
	// queue<pair<node, pair< vertical, level>>> q;
	queue<pair<TreeNode*, pair<int, int>>> q;
	q.push({node, {0, 0}});
	while (!q.empty()) {
		auto p = q.front();
		q.pop(); \
		TreeNode *temp = p.first;
		int vertical = p.second.first, level = p.second.second;
		nodes[vertical][level].insert(temp->data);

		if (temp->left != NULL) {
			q.push({temp->left, {vertical - 1, level + 1}});
		}
		if (temp->right != NULL) {
			q.push({temp->right, {vertical + 1, level + 1}});
		}
	}

	vector<vector<int>> res;
	for (auto x : nodes) {
		vector<int> col;
		for (auto y : x.second) {
			col.insert(col.end(), y.second.begin(), y.second.end());
		}
		res.pb(col);
	}
	return res;
}


int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here
	TreeNode *root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(10);
	root->left->left->right = new TreeNode(5);
	root->left->left->right->right = new TreeNode(6);
	root->right->left = new TreeNode(9);
	root->right->right = new TreeNode(10);

	vector<vector<int>> res = Vertical(root);

	for (auto x : res) {
		for (auto y : x) {
			cout << y << " ";
		}
		cout << endl;
	}



	return 0;
}