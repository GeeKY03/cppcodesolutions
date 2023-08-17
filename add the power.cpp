#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'


int binexp(int a, int b, int m){
	int ans=1;
	while(b){
		if(b&1){
			ans=(ans*1LL*a)%m;
			a=(a*1LL*a)%m;
		}
		else{
			a=(a*1LL*a)%m;
		}
	}
	return ans;
}



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int n,k,m;
	ll sum=0;
	for(int i=1;i<=n;i++){
		sum+=(binexp(i,k,m))%m;
		sum=sum%m;
	}
	cout<<sum<<endl;


	return 0;
}