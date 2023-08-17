#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define INF 1e18
#define fo(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define Fo(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
typedef pair<int, int> pi;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
int main()
{
	IOS
	int n, d;
	cin >> n >> d;
	vi a;
	for (int i = 0; i < n; i++) {
		ll x;
		cin >> x;
		a.pb(x);
	}
	sort(a.rbegin(), a.rend());
//	for(int i=0;i<n;i++){
//		cout<<a[i]<<" ";
//	}
	int p = 0;
	int x = 0;
	int ans = 0;
	while (true) {
		int q = d / a[x];
//		cout<<q<<endl;
		p = p + q + 1;
//		cout<<p<<endl;
		x++;
		if (p <= n) {
			ans++;
		}
		else {
			break;
		}
	}
	cout << ans;
	return 0;
}