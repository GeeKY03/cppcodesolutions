#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long int> vlli;
#define pb push_back
#define endl '\n'
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

vector<vector<int>> arr(10000000);

int main(){
	IOS
	auto start1 = std::chrono::high_resolution_clock::now();
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);


	// Your code goes here
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		if(n==1){
			int flag1=0;
			vi v;
			for(int i=0;i<m;i++){
				ll x;
				cin>>x;
				v.pb(x);
			}
			for(int i=0;i<m;i++){
				ll x;
				cin>>x;
				if(x!=v[i]){
					flag1=1;
					break;
				}
			}
			// cout<<"HI"<<endl;
			if(flag1==1){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
		else if(m==1){
			int flag1=0;
			vi v;
			for(int i=0;i<n;i++){
				ll x;
				cin>>x;
				v.pb(x);
			}
			for(int i=0;i<n;i++){
				ll x;
				cin>>x;
				if(x!=v[i]){
					flag1=1;
					break;
				}
			}
			if(flag1==1){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
		else{
			int flag2=0;
			for(int i=1;i<=n;i++){
		    	for(int j=1;j<=m;j++){
		    		ll x;
		    		cin>>x;
		    		arr[x].pb(i+j);
		    	}
		    }

		    for(int i=1;i<=n;i++){
		    	for(int j=1;j<=m;j++){
		    		ll x;
		    		cin>>x;
		    		cout<<x<<" ";
		    		ll sz=arr[x].size();
		    		if(sz==0){
		    			flag2=1;
		    		}
		    		else{
		    			for(int l=0;l<sz;l++){
		    				if(arr[x][l]>0){
		    					if(((i+j)&1)==(arr[x][l]&1)){
		    						arr[x][l]=-1;
		    						break;
		    					}
		    					else if((l==n-1)&&(((i+j)&1)!=(arr[x][l]&1))){
		    						flag2=1;
		    					}
		    				}
		    				else{
		    					flag2=1;
		    				}
		    			}
		    		}

		    	}
		    	cout<<endl;
		    }
		    // Final condition
		    if(flag2==1){
		    	cout<<"NO"<<endl;
		    }
		    else{
		    	cout<<"YES"<<endl;
		    }

		}
		arr.clear();
	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}