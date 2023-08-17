#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'


ll bs1(ll start, ll end, ll x){
		while(start<=end){
			ll mid=(start+end)/2;
			ll right=((mid+1)*(mid+2))/2;
			ll left=((mid)*(mid+1))/2;
			if(right==x){
				return mid+1;
			}
			else if(left==x){
				return mid;
			}
			else if((right>x)&&(left<x)){
				return mid+1;
			}
			else if(left<x){
				start=mid+1;
			}
			else{
				end=mid-1;
			}
		}
	}


// ll bs2(ll start, ll end, ll x, ll k){
// 	while(start<=end){
// 		ll mid=(start+end)/2;
// 		ll right=((mid+1)*(mid+2))/2;
// 		ll left=((mid)*(mid+1))/2;	
// 		ll ref=(k-1)*k/2;
// 		if((ref-left)==x){
// 			return (k-mid);
// 		}
// 		else if((ref-right)==x){
// 			return (k-mid-1);
// 		}
// 		else if(((ref-right)<x)&&((ref-left)>x)){
// 			return (k-mid+1);
// 		}
// 		else if((ref-left)<x){
// 			start=mid-1;
// 		}
// 		else if(ref-right>x){
// 			end=mid+1;
// 		}
// 	}
// }
ll bs2(ll start, ll end, ll x, ll k){
		while(start<=end){
			ll mid=(start+end)/2;
			ll right=((mid+1)*(mid+2))/2;
			ll left=((mid)*(mid+1))/2;
			if(right==x){
				return k-mid-2;
			}
			else if(left==x){
				return k-mid-1;
			}
			else if((right>x)&&(left<x)){
				return k-mid-1;
			}
			else if(left<x){
				start=mid+1;
			}
			else{
				end=mid-1;
			}
		}
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
		ll k,x;
		cin>>k>>x;
		ll a=k*k;
		ll b=k*(k+1)/2;
		if(x>a){
			cout<<((2*k)-1)<<endl;
		}
		else if(x<=b){
			ll start=1;
		    ll end=k;
		    ll ans=bs1(start, end, x);
		    cout<<ans<<endl;    
		}
		else if(x>b){
			x-=b;
			ll start=1;
		    ll end=k-1;
			ll y=((k-1)*k/2)-x;
			ll ans=bs2(start, end, y, k);
			cout<<ans+k<<endl;
		}
	}

	return 0;
}