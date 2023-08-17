#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'



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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int q;
	cin>>q;
	while(q--){
		ll n,r,m;
		cin>>n>>r>>m;
		ll sum=1;
		for(int i=1;i<=n;i++){
			ll a= binpow(r,i)%m;
			sum=sum+a;
			sum=sum%m;
		}
		cout<<sum<<endl;
	}


	return 0;
}