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

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	vi v = {1, 2, 4, 5};
	cout << *lower_bound(v.begin(), v.end(), 3) << endl;
	cout << distance(v.begin(), lower_bound(v.begin(), v.end(), 3)) << endl;


	return 0;
}