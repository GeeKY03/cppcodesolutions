#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		ll n,r;
		cin>>n>>r;
		vlli c,cb;
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			c.pb(a);
		}
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			cb.pb(a);
		}
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			v.pb(make_pair(c[i]-cb[i],c[i]));
		}
		ll count=0;
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++){
			ll ef=v[i].first;
			ll cost=v[i].second;
			if(r<cost){
				continue;
			}
			else{
				r=r-cost;
				count++;
				count+=(r/ef);
				r=r%ef;
				r=r+(cost-ef);
			}
		}
		cout<<count<<endl;
	}


	return 0;
}