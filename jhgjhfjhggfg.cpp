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

vector < vector < int >> findVertical(TreeNode * root) {
	map < int, map < int, multiset < int >>> nodes;
	queue < pair < node * , pair < int, int >>> todo;
	todo.push({
		root,
		{
			0,
			0
		}
	}); //initial vertical and level
	while (!todo.empty()) {
		auto p = todo.front();
		todo.pop();
		node * temp = p.first;

		//x -> vertical , y->level
		int x = p.second.first, y = p.second.second;
		nodes[x][y].insert(temp -> data); //inserting to multiset

		if (temp -> left) {
			todo.push({
				temp -> left,
				{
					x - 1,
					y + 1
				}
			});
		}
		if (temp -> right) {
			todo.push({
				temp -> right,
				{
					x + 1,
					y + 1
				}
			});
		}
	}
	vector < vector < int >> ans;
	for (auto p : nodes) {
		vector < int > col;
		for (auto q : p.second) {
			col.insert(col.end(), q.second.begin(), q.second.end());
		}
		ans.push_back(col);
	}
	return ans;
}

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here



	return 0;
}