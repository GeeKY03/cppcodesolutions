#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);

int main() {
	FastIO
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n = first.size();
	vector<vector<int>> intervals;
	for (int i = 0; i < n; i++) {
		vi v = {first[i], last[i]};
		intervals.pb(v);
	}
	int ans = 0;
	int max = -1;
	int secondMax = -1;
	sort(intervals.begin(), intervals.end());

	for (const vector<int>& interval : intervals) {
		const int a = interval[0];
		const int b = interval[1];
		if (max >= a && secondMax >= a)
			continue;
		if (max >= a) {
			secondMax = max;
			max = b;
			ans += 1;
		} else {
			max = b;
			secondMax = b - 1;
			ans += 2;
		}
	}
	return ans;



	return 0;
}