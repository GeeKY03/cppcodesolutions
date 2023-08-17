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
		cin>>n>>q;
		vi v;
		ll mxi=0;
		for(int i=0;i<n;i++){
			ll x;
			cin>>x;
			v.pb(x);
			if(x==n){
				mxi=i;
			}
		}
		// vector<vector<int>> rec(mxi);
		vector<int> rec[mxi+1];
		ll wi=0;
		for(int i=1;i<=mxi;i++){
			if(v[wi]>v[i]){
				rec[wi].pb(i);
			}
			else{
				wi=i;
				rec[wi].pb(i);
			}
		}

		// for(int i=0;i<=mxi;i++){
		// 	if(rec[i].size()==0){
		// 		cout<<0<<endl;
		// 	}
		// 	else{
		// 		for(int j=0;j<rec[i].size();j++){
		// 			cout<<rec[i][j]<< " " ;
		// 		}
		// 		cout<<endl;
		// 	}
		// }
		while(q--){
			ll j,k;
			cin>>j>>k;
			if(k>mxi){
				ll diff=k-mxi;
				ll count=0;
				ll sz=rec[j-1].size();
				if(sz>0){
					for(int i=0;i<sz;i++){
						if(rec[j-1][i]<=k){
							count++;
						}
					}
					if(j-1==mxi){
						cout<<count+diff<<endl;
					}
					else{
						cout<<count<<endl;
					}
				}
				else{
					cout<<0<<endl;
				}
			}
		}


	}




	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop1 - start1);
    cerr << "Time: " << ((long double)duration.count()) / ((long double) 1e9) << "s " << endl;
	return 0;
}