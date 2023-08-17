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
		int n;
		cin>>n;
		vi a,b;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			a.pb(x);
		}
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			b.pb(x);
		}
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			pair<int,int> p;
			p=make_pair(b[i],a[i]);
			v.pb(p);
		}
		ll def=0;
		sort(v.rbegin(),v.rend());
		for(int i=0;i<n;i++){
			def+=((v[i].second)*((i+1)-1))+((v[i].first)*(n-(i+1)));
		}
		cout<<def<<endl;
	}



	return 0;
}