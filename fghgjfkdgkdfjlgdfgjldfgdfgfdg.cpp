#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n,m;
	cin>>n>>m;
	if(m>n){
		cout<<0<<endl;
	}
	else if(m==n){
		cout<<0<<" "<<0<<endl;
	}
	else{
		ll x=n-m+1;
		if(n%m==0){
			ll num=n/m;
			cout<<(m)*((num)*(num-1))/2<<" ";
		}
		else{
			ll num=n/m;
			ll num1=n%m;
			cout<<((m-num1)*((num)*(num-1)/2))+((num1)*(num+1)*(num)/2)<<" ";
		}
		cout<<((x)*(x-1))/2<<endl;
	}
	return 0;
}