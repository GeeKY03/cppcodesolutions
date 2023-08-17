#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define endl '\n'


// string toBinary(ll n){
//     string r;
//     while(n!=0) {
//     	r=(n%2==0 ?"0":"1")+r; n/=2;
//     }
//     return r;
// }


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
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		ll ankit=(int)((2*n-1-sqrt(4*n*n-4*n+1-8*k))/2);
		// ll ankit=(int)((2*n-1-sqrt(4*n*n-4*n+1-8*k))/2);
		for(ll qt=1;qt<=ankit;qt++){
			cout<<n-qt+1<< " ";
    	}
		ll sem=(ll)(k-ankit*n+ankit*((ankit+1)/2)+1);
		// ll sem=(ll)(k-ankit*n+ankit*((ankit+1)/2)+1);
		// ll sem=(ll)(k-ankit*n+ankit*((ankit+1)/2)+1);
		cout<<sem<<" ";
		for(ll chacha=1;chacha<sem;chacha++){
			cout<<chacha<<" ";
		}
		if(sem<n-ankit){
			for(ll dassi =sem+1;dassi<=n-ankit;dassi++){
				cout<<dassi<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}