#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'


// int gcd(int a, int b){
//     return b == 0 ? a : gcd(b, a % b);   
// }


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		ll n;
		int oddc=0;
		int evenc=0;
		cin>>n;
		ll x,y;
		cin>>x>>y;
		vi v;
		for(int i=0;i<n;i++){
			ll a;
			cin>>a;
			v.pb(a);
			if(a&1){
				oddc++;
			}
			else{
				evenc++;
			}
		}
		sort(v.begin(),v.end());
		if(__gcd(x,y)==1){
			cout<<"YES"<<endl;
		}
		else if((oddc>0)&&(evenc>0)&&(x%2==0)&&(y%2==0)){
			cout<<"NO"<<endl;
		}
		else{
			ll hcf=__gcd(x,y);
			int count=1;
			for(int i=1;i<n;i++){
				if((v[i]-v[i-1])%hcf!=0){
					count--;
					break;
				}
				if(count==0){
					break;
				}
			}
			if(count==0){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
	}

	return 0;
}