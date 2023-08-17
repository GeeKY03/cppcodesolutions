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
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll rt=sqrt(n);
		if(n==1){
			cout<<0<<endl;
		}
		else if(n&1){
			cout<<1<<endl;
		}
		else if((rt*rt)==n){
			cout<<1<<endl;
		}
		else{
			ll count=0;
			while(n%2==0){
				count++;
				n=n/2;
			}
			if(count&1){
				cout<<-1<<endl;
			}
			else{
				cout<<2<<endl;
			}
		}
	}

	return 0;
}