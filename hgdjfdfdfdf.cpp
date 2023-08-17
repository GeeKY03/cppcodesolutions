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
	float x, s, r, t, n;
	cin >> x >> s >> r >> t >> n;
	vector<pair<pair<float, float>, float>> vp;
	float wd = x;
	for (int i = 0; i < n; i++) {
		float a, b, c;
		cin >> a >> b >> c;
		x -= (b - c);
		pair<pair<float, float>, float> p = {{a, b}, c};
		vp.pb(p);
	}
	sort(vp.begin(), vp.end());
	float tm = 0;
	if ((wd / r) <= t) {
		tm += (wd / r);
		t -= tm;
	}
	else {
		wd -= (r * t);
		tm += t;
		tm += wd / s;
		for (int i = 0; i < n; i++) {
			float dis = vp[i].first.second - vp[i].first.first;
			tm += dis / (vp[i].second + s);
		}
		cout << tm << endl;
	}




	return 0;
}