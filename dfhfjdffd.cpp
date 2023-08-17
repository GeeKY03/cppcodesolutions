#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'


string toBinary(ll n){
    string r;
    while(n!=0) {
    	r=(n%2==0 ?"0":"1")+r; n/=2;
    }
    return r;
}


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
	int t;
	cin>>t;
	while(t--){
		ll a,b;
		cin>>a>>b;
		string s= toBinary(a);
		int len=s.size();
		reverse(s.begin(),s.end());
		if(a<=b){
			cout<<a<<endl;
		}
		else{
			for(int i=0;i<len;i++){
				if(s[i]=='1'){
					ll x=binexp(2,i);
					if((a-x)<=b){
						cout<<a-x<<endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}