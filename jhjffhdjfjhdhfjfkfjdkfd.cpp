#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'

int binexp(int a, long long b){
	int ans=1;
	while(b>0){
		if(b&1){
			ans=(ans*1LL*a);
		}
		a=(a*1LL*a);
		b >>=1;
	}
	return ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		vi v;
		ll a,b;
		cin>>a>>b;
		for(int i=63;i>=0;i--){
			if(b&(1<<i)){
				v.pb(1);
			}
			else{
				v.pb(0);
			}
		}
		for(auto x:v){
			cout<<x;
		}
	}

	return 0;
}