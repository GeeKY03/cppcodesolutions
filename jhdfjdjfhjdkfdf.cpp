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
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin>>t;
	while(t--){
		ll n,q;
		cin>>n;
		cin>>q;

		vi v;
		int mxi=0;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			v.pb(x);
			if(x==n){
				mxi=i;
			}
		}

		ll arr[n][n]={0};
		for(int i=0;i<n;i++){
			arr[0][i]=0;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}

		ll wi=0;
		if(mxi>0){
		    for(int i=1;i<n;i++){
		    	if(v[wi]>v[i]){
		    		arr[i-1][wi]++;
		    	}
		    	else{
		    		wi=i;
		    		arr[i-1][wi]++;
		    	}
		    }
		}

		for(int l=0;l<q;l++){
			ll j,k;
			cin>>j>>k;
			ll sum=0;
			if(k>n){
				if(j==mxi+1){
					cout<<
				}
			}
			for(int i=0;i<k;i++){
				sum+=arr[i][j-1];
			}
			cout<<sum<<endl;
		}
		
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}