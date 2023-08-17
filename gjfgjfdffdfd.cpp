#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll val=1;
		if(n==1){
			cout<<1<<endl;
		}
		else{
			for(int i=0;i<=32;i++){
			    val=binpow(2,i);
			    // cout<<val<<endl;
			    if(n>val){
				    continue;
			    }
			    else if(n==val){
				    cout<<(val)-binpow(2,i-1)<<endl;
				    break;
			    }
			    else if(n<val){
				    ll r1=n-(binpow(2,i-1)-1);
				    ll r2=binpow(2,i-1)-binpow(2,i-2);
				    cout<<max(r1,r2)<<endl;
				    break;
			    }
		    }
		}
		    
	}

	return 0;
}
