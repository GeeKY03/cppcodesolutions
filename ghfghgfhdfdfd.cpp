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
	set<float> sett;
	while (n--) {
		float si, ei, wi;
		cin >> si >> ei >> wi;
		float tm = 0;
		float ert = (x - (ei - si)) / r;
		if (ert <= t) {
			tm += (x - (ei - si)) / r;
			t -= tm;
			if (t > 0) {
				float dist = ei - si;
				dist -= (wi + r) * t;
				tm += t;
				tm += dist / (wi + s);
			}
			else {
				float dist = ei - si;
				dist -= (wi + r) * t;
				tm += t;
				tm += dist / (wi + s);
			}
		}
		else {
			tm += t;
			float dst = x - (ei - si);
			dst -= r * t;
			tm += dst / s;
			tm += (ei - si) / (wi + s);
		}
		sett.insert(tm);
		cout << tm << endl;
	}



	return 0;
}