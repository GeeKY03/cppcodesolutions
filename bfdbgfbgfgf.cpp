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


// Defines the Node of Tree
class TreeNode {
public:
	int data;
	TreeNode *left, *right;

	TreeNode( int val) {
		data = val;
		left = NULL;
		right = NULL;
	}
};

int main() {
	FastIO
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);


	// Your code goes here

	struct TreeNode *root = new TreeNode(1);




	return 0;
}