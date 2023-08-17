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
        return res * res ;
}

int main(){
	IOS
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll n;
	cin>>n;
	ll num=0;
	for(int i=1;i<20;i++){
		ll x=binpow(i,10);
		if(x>n){
			num=i-1;
			break;
		}
		else if(x==n){
			num=i;
			break;
		}
	}
	string cdf="codeforces";
	if(n==1){
		cout<<"codeforces"<<endl;
	}
	else{
		string s;
		ll ctr=0;
		for(int i=1;i<=10;i++){
			ll y=binpow(num,i);
			if(y<n){
				for(ll j=0;j<num;j++){
					s.pb(cdf[ctr]);
				}
				ctr++;
			}
			else{
				for(ctr;ctr<10;ctr++){
					s.pb(cdf[ctr]);
				}
				ll diff=n-binpow(num,i-1);
				for(ll l=0;l<diff;l++){
					s.pb('s');
				}
			}
		}
		cout<<s<<endl;
	}

	
	return 0;
}