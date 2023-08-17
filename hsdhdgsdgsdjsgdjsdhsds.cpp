#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'


int binexp(int a, long long b, int m){
	int ans=1;
	while(b>0){
		if(b&1){
			ans=(ans*1LL*a)%m;
		}
		a=(a*1LL*a)%m;
		b >>=1;
	}
	return ans;
}



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		ll n,r,m;
		cin>>n>>r>>m;
		ll sum=1;
		for(int i=1;i<=n;i++){
			ll x=(binexp(r,i,m))%m;
			sum+=x;
			sum=sum%m;
		}
		cout<<sum%m<<endl;
	}

	return 0;
}